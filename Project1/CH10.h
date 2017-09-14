#ifndef CH10_h
#define CH10_h
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <functional>
using  namespace std;
using namespace placeholders;


void elimDups(vector<string> &v) {
	sort(v.begin(), v.end());
	auto end_unique = unique(v.begin(), v.end());
	v.erase(end_unique, v.end());
}


bool ishort(const string& s1, const string& s2) {
	return s1.size() < s2.size();
}


bool fivelen(const string& s1) {
	return s1.size() < 5;
}

bool check_size(const string& s, string::size_type sz) {
	return s.size() < sz;
}


void biggies(vector<string>& v, vector<string>::size_type sz) {
	elimDups(v);
	stable_sort(v.begin(), v.end(), [](const string & a, const string & b)
	{return a.size() < b.size(); });


	auto wc = find_if(v.begin(), v.end(), [sz](string const& s)
	{return s.size() >= sz; });

	for_each(wc, v.end(), [](const string& s) {cout << s << endl; });

}




void biggiesp(vector<string>& v, vector<string>::size_type sz) {

	elimDups(v);
	//stable_sort(v.begin(), v.end(), [](const string& a, const string& b) {return a.size() < b.size(); });
	auto wc = partition(v.begin(), v.end(), [sz](string const& s) {return s.size() <= sz; });
	for_each(wc, v.end(), [](const string& s) {cout << s << endl; });

}

void biggiesp2(vector<string>& v, vector<string>::size_type sz) {
	elimDups(v);
	auto wc = stable_partition(v.begin(), v.end(), [sz](const string& s) {return s.size() <= sz; });
	for_each(wc, v.end(), [](const string& s) {cout << s << endl; });

}

//10.25

void biggiesb(vector<string>& v, vector<string>::size_type sz) {
	elimDups(v);
	auto wc = partition(v.begin(), v.end(), bind(check_size, _1, sz));
	for_each(wc, v.end(), [](const string& s) {cout << s << endl; });

}



bool lessthansize(const string& s, string::size_type sz) {
	return s.size() < sz;
}





#endif // !CH10_h
