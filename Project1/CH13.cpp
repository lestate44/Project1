#include <iostream>
#include "CH13.h"
#include <vector>
#include <algorithm>

using namespace std;



void main(void)
{
	cout << "CH13" << endl;

//13.8
	//HasPtr k("fist");
	//k.show();
	//cout << endl;
	//HasPtr m("second");
	//k = m;
	//k.show();


	//Book newb("newbook");
	//
	//cout << "last line" << endl;

	//Book("dd");


//13.14
	//numbered a, b = a, c = b;
	//ff(a);
	//ff(b);
	//ff(c);


//13.18
	//Employee a("this");
	//Employee b;
	//b = a;
	//b.getid();
	//a.getid();
	//b.getname();
	//a.getname();


	//HasPtr pt("s");
	//pt.show();

//13.27
	//HasPtrNew pt("s");
	//pt.show();
	//HasPtrNew pt1(pt);
	//pt.show();
	//pt1.show();
	//HasPtrNew pt2("k");
	//pt2.show();
	//pt2 = pt;
	//pt1.show();
	//pt2.show();



//13.28
	//TreeNode t("s");
	//string* p1 = new string("dd");
	//string* p2 = new string(*p1);
	//cout << p1 << endl;
	//cout << p2 << endl;




	//HasPtrNew p1("s");
	//p1.show();
	//HasPtrNew p2;
	//p2 = p1;


//13.30
	//HasPtrSe p1("ss");
	//HasPtrSe p2=p1;
	//p2.show();

	HasPtrSe s{ "s" }, a{ "a" }, c{ "c" };
	vector<HasPtrSe> vec{ s, a, c };

	std::sort(vec.begin(), vec.end());
	for (auto &s : vec)
		s.show();

	
}