#ifndef CH12_h
#define CH12_h
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <initializer_list>
#include <exception>
#include <memory>
using namespace std;

class strblob {
public:
	typedef vector<string>::size_type size_type;
	strblob();
	strblob(initializer_list<string> il);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const string &t) { data->push_back(t); }
	void pop_back();
	const string& front();
	const string& back();

private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string &msg) const;



};


void pt(vector<string> s) {
	for (auto &vp : s)
		cout << vp;
}

strblob::strblob(): data(make_shared<vector<string>>()){};
strblob::strblob(initializer_list<string> il) :data(make_shared<vector<string>>(il)) {};
void strblob::check(size_type i, const string& msg) const {
	if (i >= data->size())
		throw out_of_range(msg);
}

const string& strblob::front() {
	check(0, "front on empty strblob");
	return data->front();
}

const string& strblob::back() {
	check(0, "back on emptry strblob");
	return data->back();
}

void strblob:: pop_back() {
	check(0, "pop_back on empty strblob");
	data->pop_back();

}



vector<int>* vall() {
	return new vector<int>();
}

void input(vector<int>* v) {
	int i;
	while(cin>>i)
		v->push_back(i);
	return;
}

void pt(vector<int>* i) {
	for (auto &v : *i)
		cout << v << endl;
}



shared_ptr<vector<int>> allv() {
	return make_shared<vector<int>>();

}


void sinput(shared_ptr<vector<int>> p) {
	int i;
	while (cin >> i)
		p->push_back(i);
	return;
}


void spt(shared_ptr<vector<int>> p) {

	for (auto &v : *p)
		cout << v << endl;
	return;
}



#endif // !CH12_h
