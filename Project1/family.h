#ifndef family_h
#define family_h
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

class family
{
public:
	using child = pair<string, string>;
	using children = vector<child>;
	using data = map<string, children>;

	void add(string const& lastname, string const& firstname, string birthday);

	void print() const;

private:
	data _data;

};




#endif // !1

