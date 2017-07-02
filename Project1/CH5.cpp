#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <stdexcept>
using namespace std;


bool prefix(const vector<int>& a, const vector<int>& b)
{
	if (a.size() > b.size())
		return prefix(b,a);
	for (int i = 0; i != a.size(); ++i)
		if (a[i] != b[i])
			return false;
	return true;
}

void main()
{

	cout << "CH 5" << endl;

//5.5
	//string scores[] = { "F", "D", "C", "B", "A", "A++" };
	//for (int g; cin >> g;)
	//{
	//	string letter;
	//	if (g < 60)
	//	{
	//		letter = scores[0];
	//		cout << letter << endl;
	//	}
	//	else
	//	{
	//		letter = scores[(g - 50) / 10];
	//		if (g != 100)
	//			letter += g % 10 > 7 ? "+" : g % 10 < 3 ? "-" : "";
	//		cout << letter << endl;
	//	}
	//}
	//string grade[] = { "F","D", "C", "B", "A", "A++" };
	//int k;
	//while (cin >> k)
	//{
	//	string letter;
	//	if (k < 60)
	//		letter = grade[0], cout << letter << endl;
	//	else
	//		letter = grade[(k - 50) / 10] + ((k % 10 > 7) ? "+" : (k%10<3)?"-":""), cout << letter<<endl;

	//}
		
//5.6
	//string grade[] = { "F","D", "C", "B", "A", "A++" };
	//for (int k; cin >> k;)
	//{
	//	string letter;
	//	letter = k < 60 ? grade[0] : grade[(k - 50) / 10];
	//	letter += (k<100 && k>=60)?(k % 10 > 7) ? "+" : (k % 10 < 3) ? "-":"":"";
	//	cout << letter << endl;
	//}



	//char k='s';
	//switch (k)
	//{
	//case 'a':
	//	break;
	//default:
	//	;
	//}



//5.9
	//int a=0, e=0, i=0, o=0, u=0;
	//char s;
	//while (cin>>s)
	//{
	//	if (s == 'a')
	//		++a; 
	//	if (s == 'e')
	//		++e; 
	//	if (s == 'i')
	//		++i; 
	//	if (s == 'o')
	//		++o; 
	//	if (s == 'u')
	//		++u; 

	//}
	//cout << a<<e<<i<<o<<u;

//5.10 5.12
	//int a = 0, e = 0, i = 0, o = 0, u = 0,fl=0,ff=0,fi=0;
	//char s,p='\0';
	//while (cin>>s)
	//{	
	//	s = tolower(s);
	//	switch (s)
	//	{
	//	case'a':
	//		++a; break;
	//	case'e':
	//		++e; break;
	//	case'i':
	//	{
	//		++i;
	//		if (p == 'f')
	//			++fi;
	//	}break;
	//	case'o':
	//		++o; break;
	//	case'u':
	//		++u; break;
	//	case'f':
	//		if (p == 'f')++ff; break;
	//	case'l' :
	//		if (p == 'f')++fl; break;
	//	default:
	//		break;
	//	}
	//	p = s;

	//}

	//cout <<fl<<ff<<fi;




	//for (char s; cin >> s;)
	//{
	//	cout << s << endl;
	//}	

//5.14
	//vector<string> s;

	//int ctc = 1,cto=1;
	//string m = "\0";
	//for (string i,p; cin >> i;)
	//{	
	//	s.push_back(i);
	//	if (i == p)
	//	{
	//		++cto;
	//	}
	//	else
	//		cto = 1;
	//	p = i;
	//	if (cto > ctc)
	//	{
	//		ctc = cto;
	//		m = i;
	//	}
	//}
	//cout << ctc<<m<<endl;

	//int ct = 1;
	//string x = "\0";
	//auto beg = s.begin();

	//while (beg!=s.end())
	//{	
	//	int cti = 1;
	//	auto begi = beg+1;
	//	while (begi != s.end())
	//	{
	//		if (*beg==*begi)
	//		{
	//			++cti;
	//		}
	//		++begi;

	//	}
	//	if (cti > ct)
	//	{
	//		ct = cti; 
	//		x = *beg;
	//	}
	//	++beg;
	//}
	//cout << ct << x;;

	//vector<int> x(5,10);
	//cout << x[1];
	//auto beg = x.begin();
	//x.push_back(1);
	//for (int k;cin>>k;x.push_back(k))
	//{
	//	;
	//}
	//
	//cout << x[x.size()-1];

	//int y[10];
	//cout << sizeof(y) / sizeof(*y);


	//vector<int> l{ 0, 1, 1, 2 };
	//vector<int> r{ 0, 1, 1, 2, 3, 5, 8 };
	//
	//cout << prefix(l, r);


	//vector<int> s = { 1,2,3,4,5 };
	//for (vector<int>::iterator beg = s.begin(); beg != s.end(); ++beg)
	//	*beg = 2 * (*beg);
	//cout << s[2];
	//for (int &i : s)
	//	i = 2 * (i);
	//cout << s[2];

//5.19
	//do {
	//	string a, b;
	//	cin >> a >> b;
	//	if (a.size() > b.size())
	//		cout << a;
	//	else
	//		cout << b;

	//} while (1);


//5.20
	//string pre = "\0";
	//string cur;
	//while (cin >> cur)
	//{
	//	if (cur == pre)
	//		break;
	//	else
	//		pre = cur;
	//}
	//cout << cur;


//5.21

	//string cur, pre;
	//while (cin >> cur)
	//{
	//	if (cur == pre && isupper(cur[0]))
	//	{
	//		cout << cur;
	//		break;
	//	}
	//	pre = cur;
	//}



	cout << "enter number: ";
	int n;
	try {
		cin >> n;
		if (!cin)
			throw exception("not int");

	}
	catch (exception ex) {                                             
		cout << "not int";
	}








}