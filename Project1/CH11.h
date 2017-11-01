#ifndef CH11_h
#define CH11_h
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;
map<string, string> buildm(ifstream &mapf);
const string& transform(const string &s, const map<string, string> &m);
void wtransform(ifstream &mapf, ifstream &input);

string low(string& s) {
	for (auto &i : s)
		i = tolower(i);
	return s;
}


string pun(string& s) {
	s.erase(remove_if(s.begin(), s.end(), ispunct), s.end());
	return s;


}

void wtransform(ifstream &mapf, ifstream &input) {
	auto tmap = buildm(mapf);
	string inp;
	while (getline(input, inp)) {
		istringstream stream(inp);
		string word;
		while (stream >> word) {
			cout << transform(word, tmap) << " ";
		}
		cout << endl;

	}
}


map<string, string> buildm(ifstream &mapf) {
	map<string, string> tmap;
	string key, value;
	while (mapf >> key && getline(mapf, value)) {
		if (value.size() > 1)
			tmap[key] = value.substr(1);
		else
			throw runtime_error("no rule for " + key);
	}
	return tmap;

}


const string& transform(const string &s, const map<string, string> &m) {
	if (m.find(s) != m.end())
		return m.find(s)->second;
	else
		return s;


}










#endif // !"CH11.h"
