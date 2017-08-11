#include<string>
#include<iostream>
#include"Stack.h"


using namespace std;

int main(void) {


	//Stack test;
	//test.push('a');
	//test.push('1');
	//test.push('2');
	//cout << test.pop() << endl;
	//test.display();
	//test.showhead();
	Stack test;
	Stack num;
	while (cin)
	{
		string c;
		cin >> c;
		if (c != "") {
			if (isdigit(c[0]))
				num.push(c);
			else
				test.push(c);
		}

	}
	test.display();
	num.display();










}