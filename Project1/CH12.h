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
	friend class StrBlobPtr;
	typedef vector<string>::size_type size_type;
	strblob();
	strblob(initializer_list<string> il);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const string &t) { data->push_back(t); }
	void pop_back();
	const string& front();
	const string& back();
	StrBlobPtr begin();
	StrBlobPtr end();

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




class StrBlobPtr 
{
private:
	shared_ptr<vector<string>> check(size_t, const string&) const;
	weak_ptr<vector<string>> wptr;
	size_t curr;
public:
	StrBlobPtr():curr(0) {};
	StrBlobPtr(strblob &a, size_t sz = 0) :wptr(a.data), curr(sz) {};
	string& deref() const;
	StrBlobPtr& incr();
	bool operator != (const StrBlobPtr& p) { return p.curr != curr; }

};


shared_ptr<vector<string>> StrBlobPtr::check(size_t i, const string& msg) const {
	auto ret = wptr.lock();
	if (!ret)
		throw runtime_error("unbound StrBlobPtr");
	if (i >= ret->size())
		throw out_of_range(msg);
	return ret;

}

string& StrBlobPtr::deref() const {
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
}


StrBlobPtr& StrBlobPtr::incr()
{
	check(curr, "increment past end of StrBlobPtr");
	++curr;
	return *this;

}



StrBlobPtr strblob::begin() 
{
	return StrBlobPtr(*this);
}

StrBlobPtr strblob::end() 
{
	auto ret = StrBlobPtr(*this, data->size());
	return ret;
}









#endif // !CH12_h
