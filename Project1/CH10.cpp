//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <list>
//#include <numeric>
//#include "CH10.h"
//#include <iterator>
//#include <functional>
//#include <fstream>
//using namespace std;
//using namespace placeholders;
//
//
//
//int main(void) {
//
//	cout << "CH10" << endl;
//
//
//	vector<int> k = { 1,2,3,4,2,2,3,4,3,2,3,4 };
//	list<string> l = { "asxzd", "aades","kwwxad","k","d","aa","eds","qaz" };
//	vector<string> vs;
//	vs.resize(l.size());
//	copy(l.cbegin(), l.cend(), vs.begin());
//
////10.1
//	//auto result=find(k.cbegin(), k.cend(), 2);
//	//auto ct = count(k.cbegin(), k.cend(), 4);
//	//cout << ct<<endl;
//
////10.2
//	//auto ctl = count(l.cbegin(), l.cend(), "aa");
//	//cout << ctl << endl;
//
////10.3
//	//int s = accumulate(k.cbegin()+1, k.cend(), 0);
//	//cout << s << endl;
//
//	//char ss[] = { 'a','b',NULL };
//	//cout << strlen(ss);
//	//string a{ "abc" };
//	//cout << a[3];
//
//	//vector<int> vec(18);
//	//fill_n(vec.begin(), 10, 3);
//	//cout << vec[13];
//
//	//int aa = sizeof vec;
//	//cout << aa;
//
////10.6
//	//fill_n(k.begin(), k.size(), 0);
//	//for (auto &i : k)
//	//	cout << i;
//
//
////10.11
//	//elimDups(vs);
//	//stable_sort(vs.begin(), vs.end(), ishort);
//	//for (auto &i : vs)
//	//	cout << i << endl;
//
//
////10.13
//	//partition(vs.begin(), vs.end(), fivelen);
//	//for (auto &i : vs)
//	//	cout << i << endl;
//
//	//auto ff=find_if(vs.begin(), vs.end(), fivelen);
//	//cout << *ff<<endl;
//
//	//auto f = [](const string& a, const string& b) {
//	//	return a.size() < b.size();
//	//};
//
//	//stable_sort(vs.begin(), vs.end(), f);
//	//for (auto &i : vs)
//	//	cout << i << endl;
//
////10.14
//	//auto f = [](const int& i, const int& j) {
//	//	return i + j;
//	//};
//
//
////10.15
//	//int x = 10;
//	//auto f2 = [x](const int& i) {
//	//	return x + i;
//	//};
//
////10.16
//	//biggies(vs, 3);
//
////10.18
//	//biggiesp(vs, 3);
//
//
////10.19
//	//biggiesp2(vs, 3);
//
//
//
////10.20
//	//int s = count_if(vs.begin(), vs.end(), [](const string& s) {return s.size() >= 3; });
//	//cout << s << endl;
//
//
////10.21
//	//int temp = 1;
//	//auto f = [&temp]()->bool {
//	//	if (temp == 0)
//	//		return true;
//	//	else {
//	//		temp--;
//	//		return false;
//	//	}
//	//};
//
//	//auto f2 = [&temp]()->bool {return (temp == 0 ? true : !(temp--)); };
//	//while (!f()) cout << temp << endl;
//	//if (f2())
//	//	cout << temp;
//
////10.22
//	
//	//auto ct = count_if(vs.begin(), vs.end(), bind(lessthansize, _1, 6));
//	//cout << ct;
//
//
////10.24
//	//string a = "de";
//	
//	//auto x= find_if(k.begin(), k.end(), bind(check_size, a, _1));
//	//cout << *x;
//
//
////10.25
//	//biggiesb(vs,3);
//
//	//int a;
//	//while (cin>>a) {
//	//	a += a;
//	//}
//	//cout << a;
//
//
//	//istream_iterator<int> in(cin), eof;
//	//cout << accumulate(in, eof, 0) << endl;
//
//	//vector<int> vi;
//	//istream_iterator<int> in_iter(cin);
//	//istream_iterator<int> eof;
//	//while (in_iter != eof)
//	//	vi.push_back(*in_iter);
//	//for (auto &i : vi)
//	//	cout << i;
//
////10.29
//	//ifstream ifs("C:/Users/M4N231/Desktop/pg.txt");
//	//istream_iterator<string> in(ifs), eof;
//	//vector<string> sv;
//	//copy(in, eof, back_inserter(sv));
//	//copy(sv.cbegin(), sv.cend(), ostream_iterator<string>(cout, "\n"));
//
//
////10.30
//	//istream_iterator<int> in(cin), eof;
//	//vector<int> t;
//	//vector<int> s(in, eof);
//	//copy(in, eof, back_inserter(t));
//	//sort(t.begin(), t.end());
//	//copy(s.begin(), s.end(), ostream_iterator<int>(cout, "\n"));
//
//
////string s = "first,middle,last";
////
////auto rc = find(s.crbegin(), s.crend(), ',');
////cout << string(s.crbegin(), rc)<<endl;
////cout << string(s.begin(), s.begin() + 3);
//
////10.34
//	//ostream_iterator<string> os(cout,"\n");
//	//copy(vs.crbegin(), vs.crend(), os);
//
//
//
//
////10.36
//	//list<int> la = { 1, 2, 0, 4, 5, 6, 7, 0, 9 };
//	//auto it = find(la.crbegin(), la.crend(), 0);
//
//	//cout << distance(la.cbegin(), it.base()) << endl;
//
//
//
//
//}