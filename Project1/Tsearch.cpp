#include "TSearch.h"
#include <string>
#include <vector>
#include <map>
#include <memory>
#include <set>
#include <fstream>
#include <iostream>
#include <sstream>


TextQuery::TextQuery(ifstream& f):file(new vector<string>)
{
	string s;
	while (getline(f, s))
	{
		file->push_back(s);
		int n = file->size() - 1;
		istringstream line(s);
		string word;
		while (line >> word)
		{
			auto &lines = wordtoline[word];
			//wordtoline[word]->insert(n);
			if (!lines)
				lines.reset(new set<int>);
			lines->insert(n);
		}
	}
}

QueryResult TextQuery::query(const string& s) const
{	
	static shared_ptr<set<int>> nodata(new set<int>);
	auto loc = wordtoline.find(s);
	if (loc == wordtoline.end())
		return QueryResult(s, nodata, file);
	else
		return QueryResult(s, loc->second, file);
}

ostream& print(ostream& os, const QueryResult& qr)
{
	os << qr.sought << "occurs: " << qr.lines->size() << " times" << endl;
	for (auto num : *qr.lines)
		os << "\t(line  " << num + 1 << ")" << *(qr.file->begin() + num) << endl;
	return os;
}

