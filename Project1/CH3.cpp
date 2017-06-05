//#include <iostream>
//#include <string>
//using namespace std;
//#include <typeinfo>
//#include <vector>
//#include <cmath>
//#include <bitset>
//using std::bitset;
//
//void reset(int k[])
//{
//	auto size = sizeof(k)/sizeof(*k);
//	int *i = k, *j = k + size;
//	while (i< j)
//	{
//		*i = 0;
//		++i;
//	}
//	
//	return;
//}
//void main()
//{
//	std::cout<<"CH 3"<<std::endl;

//string test

//string line;

//getline(cin,line);
//cout<<line;

//3.5
//string line;
//while(getline(cin,line))
//	cout<<line<<endl;

//string word;
//while(cin>>word)
//	cout<<word<<" "<<word.size()<<endl;


//3.7
//string a,b;
//cout<<"enter:"<<endl;
//cin>>a>>b;
//if(a==b)
//	cout<<"equal"<<endl;
//else if (a>b)
//	cout<<a+" is greater"<<endl;
//else
//	cout<<b+" is greater"<<endl;

//
//if(a.size()==b.size())
//	cout<<"same length";
//else if (a.size()>b.size())
//	cout<<a+" is longer";
//else
//	cout<<b+" is longer";


//3.8
//string st, st1;
//cout<<"enter:"<<endl;
//while(cin>>st)
//	st1+=st+" ";
//cout<<st1;

//3.10
//string st;
//string stn;
//cout<<"enter:"<<endl;
//getline(cin,st);
//string::size_type si=st.size();
//for(string::size_type i=0;i!=si;++i)
//	if(!ispunct(st[i]))
//		stn+=st[i];
//cout<<stn;

//string st("a.d");
//cout<<ispunct(st[1]);



//3.13
//cout<<"enter:"<<endl;
//vector<int> v;
//int k;
//while(cin>>k)
//	v.push_back(k);

//for(vector<int>::size_type i=0;i!=v.size();++i)
//	if(v.size()%2!=0 && i==v.size()-1)
//		cout<<"last one: "<<v[i];
//	else{
//		cout<<v[i]+v[i+1]<<endl;
//		++i;
//		}


//for(vector<int>::size_type i=0;i<=v.size()-1-i;++i)
//	if(v.size()%2!=0 && v.size()-1-i==i){
//		cout<<"middle: "<<v[i]<<endl;
//		break;}

//	else
//		cout<<v[v.size()-1-i]+v[i]<<endl;


//for(vector<int>::size_type first=0, last=v.size()-1;first<last;++first,--last){
//	cout<<v[first]+v[last]<<endl;
//	if (first == last)
//		cout<<v[first];
//}

//3.14
//cout<<"enter:"<<endl;
//string st;
//vector<string> stv;
//while(cin>>st)
//stv.push_back(st);

//for(vector<string>::size_type i=0; i!=stv.size();++i)
//{
//	for(string::size_type j=0; j!=stv[i].size();++j)
//		stv[i][j]=toupper(stv[i][j]);
//
//	cout<<stv[i]+" ";
//}

//const vector<int> ni(10,9);
// vector<int>::const_iterator c = ni.begin();

//3.17(13)
//cout<<"enter:"<<endl;
//int k;
//vector<int> iv;
//while(cin>>k)
//	iv.push_back(k);

//for(vector<int>::iterator it=iv.begin();it!=iv.end();++it)
//{
//	if(iv.size()%2!=0&&it==iv.end()-1)
//		cout<<"last one:"<<*it;
//	else
//	{
//		cout<<*it+*(it+1)<<endl;
//		++it;
//	}
//	
//}

//for(vector<int>::iterator begin=iv.begin(),end=iv.end()-1;begin<=end;++begin,--end)
//	if(begin==end)
//		cout<<"middle:"<<*begin;
//	else
//	{	
//		cout<<*begin+*(end);
//	}
//3.17 (14)

//cout<<"enter:"<<endl;
//string x;
//vector<string> sv;
//while(cin>>x)
//	sv.push_back(x);

//for(vector<string>::iterator si=sv.begin();si!=sv.end();++si)
//{	
//	for(string::size_type i=0;i!=(*si).size();++i)
//		(*si)[i]=toupper((*si)[i]);
//	cout<<*si<<" ";
//}

//3.18
//cout<<"enter:"<<endl;
//int k;
//vector<int> iv(10);
//for(int i=0;i<10;++i)
//{
//	cin>>k;
//	iv[i]=k;
//}
//for(vector<int>::iterator it=iv.begin();it!=iv.end();++it)
//{
//	*it=*it*2;
//}
//for(vector<int>::iterator it1=iv.begin();it1!=iv.end();++it1)
//	cout<<*it1<<" ";



// bitset
//string str("1110000110");
//bitset<10> v6(str,str.size()-4);
//
//string st="1100";
//bitset<7> v4(5);
//cout<<v4;

//bitset<32> bv(0x20212e);
//cout<<bv.set();

//bitset<32> bv;
//int x=0, y=1, z;
//z=x+y;
//while(z<=21)
//{	
//	bv.set(z);
//	cout<<z<<endl;
//	cout<<bv<<endl;
//	x=y;
//	y=z;
//	z=x+y;
//}
//cout<<bv;


//reference and pointers

//int k(9);
//int a(3);
//int &kk = k;
//cout << &kk<<endl;

//int *ap = &a;
//int *kp = &k;
//cout << *kp<<endl;
//int &kk = *kp;
//kp = ap;
//
//cout << *kp<<kk;

//
//int &kr = k;
//kr = 7;
//cout << k;

//int *kp = &k;
//int *ap = &a;
//
//int *&r = kp;
//r = ap;
//cout << *r;
//*r = 4;
//cout << a;

//int k = 0, *kp = &k;

//int s = 5;
//int &k = s;


//int a = 0;
//decltype(a) z;
//z = 1;
//cout << z;

//int i = 3, &r = i;
//decltype(r + 2) b;
//cout << b;

//int i = 4, *p = &i, &j=i;
//int s = *p;
//cout << typeid(*p).name();
//
//decltype(*p+5) c;

//int a = 3, b = 4, &r =b;
//int *p = &r;
//decltype(a) c = a;
//decltype((b)) d = a;
//++c;
//++d;
////cout << c << d;
////auto s = 3;
//cout << typeid(r).name();

//int a = 0;
//auto b = a;
//vector<int> v{ 1,2,3,4,5 };
//for (auto &i : v)
//	i *= i;
//for (auto i : v)
//cout << i << " ";


//vector<int> k;
//
//vector<int>::iterator i = k.begin();
//for (int j = 0; j != 5; ++j)
//k.push_back(j);
//
//for (auto s = k.begin(); s != k.end(); ++s)
//cout << *s << endl;
//
//auto l= k.begin();

//vector<int> v1;
//v1.push_back(2);
//vector<int> v2=v1;
//cout << v2[0];

//vector<int> v = { 1,2,3,4 };
//
//for (auto &i : v) 
//{
//	i += i;
//	cout << i;
//}
//
//cout << v[1];

//unsigned a = 4 / 3;
//cout << a;

//3.31
//int arr[10];
//int j(0);
//for (auto &i : arr)
//{
//	i = j;
//	++j;
//}
//
//cout << arr[9];

//3.32

//vector<int> v;
//for (int i = 0; i != 10; ++i)
//v.push_back(i);
//cout << v[8];



//int a[] = { 1,2,3 };
//cout << "ss" << sizeof(a)/sizeof(*a) << endl;
//reset(a);
//
//cout << a[1];
//int o = *a;
//cout << o;

//int k = 1;
//int &j = k;
//cout << &j<<endl;
//
//int ia[3][3]=
//{
//	{1,2,3},
//	{4,5,6},
//	{7,8,9}
//
//};
//
//int (&row)[3]= ia[1];
//
//cout << typeid(row).name()<<endl;
//cout << *row;



//int ia[3][3];





//}
