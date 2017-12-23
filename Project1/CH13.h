#ifndef CH13_h
#define CH13_h
#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include <cstring>
using namespace std;
class HasPtr {
public:
	HasPtr(const string& s = string()) :
		ps(new string(s)), i(0) { }
	HasPtr(const HasPtr& hp):ps(new string(*hp.ps)),i(hp.i){}
	HasPtr& operator=(const HasPtr& hp)
	{
		/*string* newps = new string(*hp.ps);
		delete ps;*/
		*ps = *hp.ps;
		i = hp.i;
		return *this;
	}
	void show() { cout << *ps<<" at: "<<ps; }
	~HasPtr()
	{
		delete ps;
	}

private:
	string *ps;
	int i;
};



class Book
{
	char* bookName;
public:
	Book(const char* name)
	{
		bookName = new char[strlen(name) + 1];
		strcpy(bookName, name);
	}
	~Book()
	{
		cout << "destructor called"<<endl;
		delete[]bookName;
	}


};

class numbered
{	
	friend void f(numbered s);
	friend void ff(const numbered&);
	static int num;
	int mysn;
public:
	numbered()
	{
		cout << "original constructor" << endl;
		mysn = num++;
	}
	numbered(numbered&)
	{
		cout << "copy constructor" << endl;
		mysn = num++;
	}


};
int numbered::num = 0;

void f(numbered s)
{
	cout << s.mysn << endl;
}

void ff(const numbered& s)
{
	cout << s.mysn << endl;
}


class Employee
{
	static int id;
	string name;
public:
	Employee()
	{
		id +=1 ;
	};
	Employee(const string& s)
	{
		id +=1 ;
		name = s;
	}
	void getid()
	{
		cout << id << endl;
	}
	void getname()
	{
		cout << name << endl;
	}

};

int Employee::id = 0;














#endif // !CH13_h
