#include <iostream>
#include <string>
#include "CH12.h"
#include <conio.h> 
#include <new>
#include <fstream>
#include "TSearch.h"
using namespace std;


void runQueries(ifstream& infile)
{
	TextQuery tq(infile);
	while (true)
	{
		cout << "enter word to look for, or q to quit: ";
		string s;
		if (!(cin >> s) || s == "q") break;
		print(cout, tq.query(s)) << endl;
	}
}

void main(void) {

	cout << "CH12" << endl;



	//vector<string> v {"ab", "abc", "aaaa"};
	//for (auto &vp : v)
	//	cout << vp;

	//ÊäÈë¼üÖµ
	//int chs;
	//while (1) {
	//	if (_kbhit()) {
	//		chs = _getch();
	//		chs = _getch();
	//		break;
	//	}
	//}
	//cout << chs;



	//pt({ "s","b" });


//12.3
	//strblob s({ "a" });
	//system("pause");


	//int *p = new int;
	//cout << *p;
	//int c(4);
	//int* p = &c;
	//cout << p<<endl<<&c;


	//int i(4);
	//int *p = &i;
	//cout << i;
	////delete p;
	////cout << i;

//12.6
	//vector<int>* v = vall();
	//input(v);
	//pt(v);
	//delete v;


//12.7
	
	//shared_ptr<vector<int>> v = allv();
	//sinput(v);
	//spt(v);



	//vector<string> v1;
	//{
	//	vector<string>* v2 = new vector<string>{ "1","dd" };
	//	v1 = *v2;
	//	cout << v2<<endl;
	//	delete v2;
	//}
	//cout << v1[1];




	//std::unique_ptr<std::string> p1(new std::string("hello"));
	////std::unique_ptr<std::string> p2 = p1; 

	//std::cout << *p1 << std::endl;
	//p1.reset(nullptr);
	//return;





	//auto p = make_shared<int>(4);
	//auto o = p;
	////o.reset();
	//cout << p.use_count();


//12.20
	//ifstream ifs("C:/Users/M4N231/Desktop/test.txt");
	//strblob sb;
	//string s;
	//while (getline(ifs, s))
	//{
	//	sb.push_back(s);
	//}
	//for (StrBlobPtr sbp = sb.begin(); sbp != sb.end(); sbp.incr())
	//{
	//	cout << sbp.deref() << endl;
	//}


	//int* ps = new int(3);
	//delete ps;
	
	//int *p = new int[4]{ 1,2,3,4 };

	//cout << p[2];

	//string* p = new string[2]{ "1,","2" };
	//string* q = p;
	//cout << *p;
	
	//vector<int> i = { 1,2,3,4 };
	//allocator<int> allo;
	//auto p = allo.allocate(i.size() + 4);
	//auto q = uninitialized_copy(i.begin(), i.end(), p);
	//cout << *(--q);
	//uninitialized_fill_n(q, 4, 5);
	//cout << *(++q);


//12.26
	//allocator<string> allo;
	//auto p = allo.allocate(5);
	//string in;
	//auto q = p;
	//while (cin >> in && q!=p+5)
	//{
	//	allo.construct(q++, in);

	//}
	//while (p != q)
	//{
	//	cout << *--q << endl;
	//	allo.destroy(q);
	//}
	//allo.deallocate(p, 5);






//12.27
	


	//ifstream ifs("C:/Users/M4N231/Desktop/test.txt");
	//runQueries(ifs);

	
	













}
