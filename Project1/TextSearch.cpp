#include "TextSearch.h"
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <fstream>
#include <sstream>


TextQuery::TextQuery(ifstream& infile)
{
	string s;
	while (getline(infile, s))
	{	
		file.push_back(s);
		int n = file.size() - 1;
		istringstream line(s);
		string word;
		while (line >> word)
		{
			auto &lines = wordtoline[word];
			if (lines.empty())
			{
				set<int> s;
				wordtoline.insert(make_pair(word, s));
			}
			lines.insert(n);


		}
	}
	
}

QueryResult TextQuery::query(const string& s) const
{	
	set<int> nodata;
	auto loc = wordtoline.find(s);
	if (loc == wordtoline.end())
		return QueryResult(s, nodata, file);

	else
		return QueryResult(s, loc->second, file);
}

ostream& print(ostream& os, const QueryResult& qr)
{
	os << qr.sought << " occurs: " << qr.lines.size() << " times" << endl;
	for(auto num:qr.lines)
		os << "\t(line " << num + 1 << ")" << *(qr.file.begin() + num) << endl;
		return os;

}