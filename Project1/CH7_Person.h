#ifndef CH7_Person_h
#define CH7_Person_h
#include <iostream>
#include <string>
using namespace std;

//7.4 & 7.5

class person {
	string name;
	string address;

public:
	auto getname() const->string const& { return name; }
	auto getadd() const->string const& { return address; }
	person() = default;
	person(istream& is);
	person(const string& n,const string& add):name(n),address(add){}
	friend istream& read(istream& is, person& p);
	friend ostream& print(ostream& os, const person &p);


};
istream& read(istream& is, person& p);
ostream& print(ostream& os, const person &p);

//7.9

istream& read(istream& is, person &p) {
	return is >> p.name >> p.address;
}

ostream& print(ostream& os, const person &p) {
	return os << p.getname() << " " << p.getadd()<< endl;
}
person::person(istream& is)
{
	read(is, *this);
}


#endif