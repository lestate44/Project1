//#include <string>
//#include <iostream>
//#include <algorithm>
//#include <iterator>
//#include <functional>
//#include <bitset>
//#include <map>
//#include <set>
//#include "CH11.h"
//#include "family.h"
//#include <fstream>
//#include <sstream>
//using namespace std;
//
//
//
//
//int main(void) {
//	cout << "CH11" << endl;
//
////11.3
//	//map<string, size_t> namec;
//	//string name;
//	//while (cin >> name)
//	//	++namec[pun(low(name))];
//	//for (auto &w : namec)
//	//	cout << w.first << ": " << w.second << endl;
//
//	//string choice="y";
//	//map<string, vector<string>> family;
//	//string name;
//	//while(true) {
//	//	cout << "enter family name:";
//	//	cin >> name;
//	//	cout << "enter member:";
//	//	string member;
//	//	cin.clear();
//	//	while (cin >> member)
//	//		family[name].push_back(member);
//	//	cout << "continue?" << endl;
//	//	cin.clear();
//	//	string c2;
//	//	cin >> c2;
//	//	if (c2 != "y")
//	//		break;
//
//	//}
//
//	//for (auto &p : family) {
//	//	cout << p.first << "family:";
//	//	for (auto &m : p.second)
//	//		cout << m << ",";
//	//	cout<<endl;
//	//}
//
////11.12
//	//string a;
//	//int b;
//	//vector<pair<string, int>> vec;
//	//while (cin >> a >> b) {
//	//	vec.push_back(pair<string, int>(a, b));
//	//}
//
//	//for (auto &p : vec)
//	//	cout << p.first << ":" << p.second << endl;
//
//
////11.14
//
//	//family fam;
//	//auto msg = "enter last name, first name and birthdayj:";
//	//for (string l, f, b; cout << msg, cin >> l >> f >> b; fam.add(l, f, b));
//	//fam.print();
//
//
//
//	//map <string, int> word_count;
//	//auto m = word_count.begin();
//	//(*m).first;
//	//m->second;
//
//
//
//	//map < string, int> word;
//	//auto ts = word.insert({ "abc",1 });
//
//	//cout << ts.first->first;
//	//cout << ts.second;
//
//
////11.23
//	//multimap<string, string> families;
//	//for (string lname, cname; cin >> cname >> lname; families.insert({ lname, cname }));
//
//	//cout << families.erase("c");
//
//
//	//int s{ 4 };
//	//while (s) {
//	//	cout << s << endl;
//	//	--s;
//	//}
//
//
////11.31
//	//multimap<string,string> authors{
//	//	{ "alan", "DMA" },
//	//	{ "pezy", "LeetCode" },
//	//	{ "alan", "CLRS" },
//	//	{ "wang", "FTP" },
//	//	{ "pezy", "CP5" },
//	//	{ "wang", "CPP-Concurrency" } };
//
//	//string au = "pezy";
//	//string work = "CPS";
//	//auto count = authors.count(au);
//	//while (count) {
//	//	if (authors.find(au)->second == work) {
//	//		authors.erase(authors.find(au));
//	//		break;
//	//	}
//	//	--count;
//	//}
//
//	//for (const auto& auth : authors)
//	//	cout << auth.first << " " << auth.second << endl;
//
//
//
////11.32
//	//multimap<string,string> authors{
//	//	{ "alan", "DMA" },
//	//	{ "pezy", "LeetCode" },
//	//	{ "alan", "CLRS" },
//	//	{ "wang", "FTP" },
//	//	{ "pezy", "CP5" },
//	//	{ "wang", "CPP-Concurrency" } };
//
//
//	//map<string, multiset<string>> orderau;
//	//
//	//for (const auto &auth : authors)
//	//	orderau[auth.first].insert(auth.second);
//	//
//	//
//	//for (const auto& autho : orderau) {
//	//	cout << autho.first << ": ";
//	//	for (const auto &wo : autho.second)
//	//		cout << wo<<" ";
//	//	cout << endl;
//	//}
//
//
//
////11.33
//
//	//ifstream ifs_rule("C:/Users/M4N231/Desktop/rule.txt");
//	//ifstream ifs_test("C:/Users/M4N231/Desktop/test.txt");
//
//	//wtransform(ifs_rule, ifs_test);
//
//	//string b, a, c;
//	//while (ifs_rule >> b && ifs_rule>>c && getline(ifs_rule, a)) {
//	//	cout<<b<<endl;
//	//	cout << c << endl;
//	//	cout << a << endl;
//	//	
//	//}
//		
////	cout << b << endl<< a;
//
//	
//	//map<string, string> t = buildm(ifs_rule);
//
//	//for (auto &z : t)
//	//	cout << z.first << ": " << z.second<<endl;
//
//
//}