#include <iostream>
#include "CH13.h"
#include <vector>
#include <algorithm>

using namespace std;

static int gEightQueen[8] = { 0 };
static int gCount = 0;

void print()
{
	int outer;
	int inner;

	for (outer = 0; outer <8; outer++) {
		for (inner = 0; inner < gEightQueen[outer]; inner++)
			printf("* ");

		printf("# ");

		for (inner = gEightQueen[outer] + 1; inner < 8; inner++)
			printf("* ");
		
		//printf("n");
		cout << endl;
	
	}

	//printf("=====================================n");
}

int check_pos_valid(int loop, int value)
{
	int index;
	int data;

	for (index = 0; index < loop; index++) {
		data = gEightQueen[index];

		if (value == data)
			return 0;

		if ((index + data) == (loop + value))
			return 0;

		if ((index - data) == (loop - value))
			return 0;
	}

	return 1;
}

void eight_queen(int index)
{
	int loop;

	for (loop = 0; loop < 8; loop++) {
		if (check_pos_valid(index, loop)) {
			gEightQueen[index] = loop;

			if (7 == index) {
				gCount++, print();
				cout << endl;
				gEightQueen[index] = 0;
				return;
			}

			eight_queen(index + 1);
			gEightQueen[index] = 0;
		}
	}
}

struct X {
	X() { std::cout << "X()" << endl; }
	X(const X&) {
		cout << "X(const X&}" << endl;
	}
	X& operator=(const X&) {
		cout << "X& operator=(const X&)" << endl;
		return *this;
	}
	~X() { cout << "~X" << endl; }
};

void f(const X &rx, X x)
{
	std::vector<X> vec;
	vec.reserve(2);
	vec.push_back(rx);
	vec.push_back(x);
}

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


//13.13
	//X a;
	//X b(a);
	//X c;
	//X a;
	//X b = a;
	//X*  px = new X;
	//f(*px, *px);
	//delete px;



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

	//HasPtrSe s{ "s" }, a{ "a" }, c{ "c" };
	//vector<HasPtrSe> vec{ s, a, c };

	//std::sort(vec.begin(), vec.end());
	//for (auto &s : vec)
	//	s.show();

	
	eight_queen(0);
	printf("total = %dn", gCount);



}