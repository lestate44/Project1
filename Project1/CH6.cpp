//#include <iostream>
//#include <string>
//#include <vector>
//#include "Chapter6.h"
//using namespace std;
//
//
////6.3
////int fact(int k)
////{
////	int di = k;
////	int res = k;
////	while (di != 1)
////	{
////		res *= (di - 1);
////		di = --di;
////	}
////	return res;
////}
////
////double abss(double k) {
////	return k > 0 ? k : -k;
////}
////int cnt(void) {
////	static int ct = 0;
////	return ++ct;
////
////}
//
////6.10
//void exch(int *a, int *b) {
//	int c=*a;
//	*a = *b;
//	*b = c;
//	return;
//}
//
//string::size_type findchar(const string &s, char &c, string::size_type &occ) {
//	auto ret = s.size();
//	occ = 0;
//	for (decltype(ret) i = 0; i != s.size(); ++i) {
//		if (s[i] == c) {
//			if (ret == s.size())
//				ret = i;
//			++occ;
//		}
//	}
//
//	return ret;
//}
//
//
//
////6.11
//	void reset(int &k){
//		k = 0;
//		return;
//	}
//
////6.12
//	void change(int &a, int &b) {
//		int c = a;
//		a = b;
//		b = c;
//		return;
//	}
//
//	//int fcn(const int i) {
//	//	return i;
//	//}
//
//	//6.17
//	bool ifcap(const string &x)
//	{	
//		for (auto ch:x)
//		{
//			if (isupper(ch))
//				return true;
//		}
//		return false;
//	}
//	//6.17
//	void tolow(string &k)
//	{
//		for (auto& ch:k)
//		{
//			if (isupper(ch))
//				ch = tolower(ch);
//		}
//		return;
//	}
//
//	void print(int (&arr)[10]) {
//		for (auto elem : arr)
//			cout << elem << endl;
//	}
//
//	//6.21
//	int comp(int a, const int *b) {
//		return a > *b ? a : *b;
//	}
//
//	//6.22
//	void traf(int*& a, int*& b) {
//		int* c = a;
//		a = b;
//		b = c;
//	}
//
//	void pchange(int *a, int*b) {
//		int c = *a;
//		*a = *b;
//		*b = c;
//	}
////6.23
//	void arrprint(int(&arr)[2]) {
//		for (auto ele : arr)
//			cout << ele << endl;
//	}
////6.27
//	int sum( initializer_list<int> const & li) {
//		int k = 0;
//		for (auto ele : li)
//			k += ele;
//		return k;
//	}
//
//
//	void outvector(vector<int>::iterator head, vector<int>::iterator tail) {
//		if (head == tail)
//		{
//			return;
//		}
//		cout << *head << endl;
//		outvector(++head, tail);
//	}
//
//	void printv(vector<int> v) {
//		for (auto &i : v)
//			cout << i;
//		return;
//	}
//
//	string a = "this";
//	void te(string k = a) {
//		cout << a;
//		return;
//	}
//
//
////6.54
//	int tes(int, int);
//	//int(*pt)(int, int) = tes;
//	//pt = tes;
//	using pt = int(*)(int, int);
//	vector<pt> vs;
//	vector<decltype(tes) *> v;
////6.55
//	int add(int a, int b) { return a + b; }
//	int sub(int a, int b) { return a - b; }
//	int mult(int a, int b) { return a*b; }
//	int divd(int a, int b) { return b==0?0: a / b; }
//	
//
//
//
//void main()
//{
////6.3
//	//cout << fact(7)<<endl;
//	//cout << abss(-3.2)<<endl;
//
////6.7
//	//for (int i = 0; i < 7; ++i)
//	//{
//	//	cout<<cnt()<<endl;
//	//}
//	//cout << cnt();
//
//	//std::cout << "5! is " << fact(5) << std::endl;
//	//std::cout << func() << std::endl;
//	//std::cout << abss(-9.78) << std::endl;
//
////6.10
//	//int a = 1, b = 3;
//	//int *pa = &a, *pb = &b;
//	//int *pc = pa;
//	//pa = pb;
//	//pb = pc;
//	//cout <<*pa<<*pb;
//	//exch(pa, pb);
//
//	//cout << a << b;
//	//string s = "this is som";
//	//char c = 'o';
//	//string &sp = s;
//	//string::size_type k = 0;
//	//string::size_type &kr = k;
//	//cout << findchar(s, c, k)<<k<<endl;
//	//cout << k;
//	//sp = "sssss";
//	//cout<<sp;
//
//
////6.11
//	//int k = 33;
//	//reset(k);
//	//cout << k;
//
////6.12
//	//int a = 2, b = 4;
//	//change(a, b);
//	//cout << a << b;
//
//
//
////6.17
//	//cout<<ifcap("des`sd")<<endl;
//	//string x = "SdesDLL";
//	//tolow(x);
//	//cout << x;
//
//
//	//int k = 1;
//	//int j = 2;
//	//int & const s = k;
//	//const int &a = k;
//	//int const&q = k;
//	//s = j;
//	//cout << s <<endl << a<<endl << q;
//
//
////6.21
//	//int a = 4, b = 6;
//	//cout << comp(3, &b);
//
////6.22
//	//int a = 5, b = 6;
//	//int *pa = &a, *pb = &b;
//	//pchange(pa, pb);
//	//cout << a << b;
//	//traf(pa, pb);
//	//cout << *pa<<*pb;
//
////6.23
//	//int j[2] = { 1,2 };
//	//arrprint(j);
//	//int * pj = j;
//	//cout << j<<endl;
//	//cout << pj;
//
//	//char p[] = "abcde";
//	//string x = &p[1];
//	//cout << x << endl;
//	//char *pt = &p[0];
//	//char *pt1 = &p[1];
//	//cout << p[1] << endl;
//	//cout << p << endl;
//	//cout << &p<<endl;
//	//cout << &pt<<endl;
//	//cout << &pt1;
//	//cout << (void *)p<<endl;
//	//cout << (void *)pt;
//
//
//
//	//char *p[] = { "abcd","asdf" };
//	//char **s;
//	//s = p;
//	//cout << p << endl;
//	//cout << **s<<endl;
//	//cout << &p[0];
//	//cout << p<<endl;
//	//char *pt = &p[0][0];
//	//cout << &pt<<endl;
//	//printf("%p", pt);
//
//
//	//int s[3] = { 1,2,3 };
//	//cout << &s << endl;
//	//cout << &s[0] << endl;
//	//cout << &s[1] << endl;
//	//cout << &s[2] << endl;
//
//
//
//
//	//char str1[] = "abcde", str2[20], *p1, *p2;
//	//p1 = str1; p2 = str2;
//	//for (;*p1 != '\0'; p1++, p2++)
//	//	*p2 = *p1;
//	//*p2 = '\0';
//	////p1 = str1; p2 = str2;
//	//cout << "str1 is: " << str1 << endl;
//	//cout << "str2 is: " << str2 << endl;
//
//
//
//	//int *ar[2];
//	//int arv[]{1,2};
//	//ar[1] = &arv[1];
//	//ar[0] = &arv[0];
//	//int **pp = ar;
//	//cout << pp;
//
//	//char a[4] = "abc";
//	//char *b = a;
//	//cout << &a << endl;
//	//cout << (void *)b;
//
//	//char *ptr = "abc";
//	//printf("%p", ptr);
//	//ptr = ptr + 2;
//	//cout << ptr;
//
//
//	//int *s[3];	
//	//int k[]{ 1,2,3 };
//	//int *n = &k[0];
//	//s[0] = &k[0];
//	//s[1] = &k[1];
//	//s[2] = &k[2];
//	//cout << s[0] << endl;
//	//cout << n;
//
//
//	//char *s = "abc";
//	//char *k = s;
//	//cout << (void *)k << endl;
//	//cout << (void *)s<<endl;
//	//cout << &s<<endl;
//
//	//char *s[] = { "abc","edf","xxx" };
//	////cout << *(s + 1) << endl;
//	////cout << (void *)s[1] << endl;
//	////printf("%p", s+1);
//	//cout << (void*)&s << endl;
//	//cout << (void*)s << endl;
//	////printf("%p", (void *)s);
//	//cout << (void *)s[0]<<endl;
//	////cout << (void *)&s[0][1] << endl;
//	////cout << ((void *)&s[0][2]) << endl;
//	////char *a = "abc";
//	////cout << (void *)a<<endl;
//	////cout << (void *)&a[1] << endl;
//
//
//	//char *a = "abc";
//	//cout << (void *)a;
//
////6.27
//	//cout << sum({ 1,2,3,4,5,6,7,8,9,10 });
//	//vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//outvector(vec.begin(), vec.end());
//	//printv(vec);
//
////a = "that";
////te();
//
////6.55
//	vs.push_back(add);
//	vs.push_back(sub);
//	vs.push_back(mult);
//	vs.push_back(divd);
//
//	for (vector<pt>::size_type k=0; k != vs.size(); ++k) {
//		cout << vs[k](12,4);
//	}
//
//
//
//
//}