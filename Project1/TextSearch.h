//#ifndef TextSearch_h
//#define TextSearch_h
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <string>
//#include <map>
//#include <set>
//#include <memory>
//
//
//using namespace std;
//
//class QueryResult;
//
//class TextQuery
//{
//	vector<string> file;
//	map<string, set<int>> wordtoline;
//
//public:
//	TextQuery(ifstream &infile);
//	QueryResult query(const string& s) const;
//};
//
//
//class QueryResult
//{
//	string sought;
//	set<int> lines;
//	vector<string> file;
//
//public:
//	friend ostream& print(ostream&, const QueryResult&);
//	QueryResult(string s, set<int> p, vector<string> f):sought(s),lines(p),file(f){}
//};
//
//ostream& print(ostream&, const QueryResult&);
//
//
//
//
//
//
//
//
//
//
//#endif // ! TextSearch_h
//
