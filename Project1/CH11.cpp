#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <functional>
#include <bitset>
#include <map>
#include <set>
#include "CH11.h"
#include "family.h"
using namespace std;




int main(void) {
	cout << "CH11" << endl;

//11.3
	//map<string, size_t> namec;
	//string name;
	//while (cin >> name)
	//	++namec[pun(low(name))];
	//for (auto &w : namec)
	//	cout << w.first << ": " << w.second << endl;

	//string choice="y";
	//map<string, vector<string>> family;
	//string name;
	//while(true) {
	//	cout << "enter family name:";
	//	cin >> name;
	//	cout << "enter member:";
	//	string member;
	//	cin.clear();
	//	while (cin >> member)
	//		family[name].push_back(member);
	//	cout << "continue?" << endl;
	//	cin.clear();
	//	string c2;
	//	cin >> c2;
	//	if (c2 != "y")
	//		break;

	//}

	//for (auto &p : family) {
	//	cout << p.first << "family:";
	//	for (auto &m : p.second)
	//		cout << m << ",";
	//	cout<<endl;
	//}

//11.12
	//string a;
	//int b;
	//vector<pair<string, int>> vec;
	//while (cin >> a >> b) {
	//	vec.push_back(pair<string, int>(a, b));
	//}

	//for (auto &p : vec)
	//	cout << p.first << ":" << p.second << endl;


//11.13

	family fam;
	auto msg = "enter last name, first name and birthdayj:";
	for (string l, f, b; cout << msg, cin >> l >> f >> b; fam.add(l, f, b));
	fam.print();


}