#ifndef TSearch_h
#define TSearch_h
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <memory>
#include <set>
#include <map>

using namespace std;

class QueryResult;

class TextQuery
{	
	shared_ptr<vector<string>> file;
	map<string, shared_ptr<set<int>>> wordtoline;

public:
	TextQuery(ifstream& f);
	QueryResult query(const string& s) const;

};


class QueryResult
{
	string sought;
	shared_ptr<set<int>> lines;
	shared_ptr<vector<string>> file;

public:
	friend ostream& print(ostream&, const QueryResult&);
	QueryResult(string s, shared_ptr<set<int>> p, shared_ptr<vector<string>> v)
		:sought(s), lines(p), file(v) {};
	set<int>::iterator begin() const 
	{
		return lines->begin();
	};
	set<int>::iterator end() const
	{
		return lines->end();
	};
	shared_ptr<vector<string>> get_file() const
	{
		return file;
	};

};


ostream& print(ostream&, const QueryResult&);






























#endif // !TSearch_h

