//#include <iostream>
//#include <math.h>
//using namespace std;
//#include <limits>
//#include "Sales_item.h"
//
////CH1
//void hello()
//{
//	std::cout<<"function test"<<std::endl;
//}
//
//void main()
//{
//	std::cout<<"Chapter 1:"<<std::endl;
//std::cout<<"enter:"<<std::endl;
//int v1,v2;
//std::cin>>v1>>v2;
//std::cout<<v1+v2<<std::endl;
//hello();
//	std::cout<<"start again!"<<std::endl;
//1.10
//int j=0;
//for(int i=50;i<=100;++i){		
//	j+=i;
//}
//std::cout<<j;

//int k=50,l=0;
//while(k<=100){
//	l+=k;
//	++k;
//}
//std::cout<<l;

//1.11
//int i=10;
//while(i>=0){
//	std::cout<<i<<std::endl;
//	--i;
//}
//
//for(int j=10;j>=0;--j){\
	//	std::cout<<j<<std::endl;

//}

//1.16
//int a,b;
//std::cout<<"enter:";
//std::cin>>a>>b;
//if(a>b){
//	std::cout<<a<<" is larger"<<std::endl;
//}
//if(a=b){
//	std::cout<<"draw"<<std::endl;
//}
//else{
//	std::cout<<b<<" is larger"<<std::endl;
//}

//1.17
//int c=0;
//char k='y';
//int a=0;
//while(k=='y'){
//std::cout<<"enter:"<<std::endl;
//std::cin>>a;
//if (a<0){
//	++a;
//}
//std::cout<<"continue? y/n";
//std::cin>>k;
//}
//std::cout<<a;


//int sum=0,value;
//while(std::cin>>value){
//	sum+=value;
//}
//std::cout<<sum;

//x^x=100
//double limit = pow(10.0,-15.0);
//double start = 1;
//double answer = 0;
//double target = 100;
//int loop =0;
//while (start>limit){
//	++loop;
//	answer +=start;
//	double current = pow(answer,answer);
//	cout<<start<<endl;
//	if(current>target){
//		answer-=start;
//		start=start/10;
//	}
//	else if (current == target){
//		break;
//	}

//
//}
//
//cout.precision(std::numeric_limits<double>::max_digits10);
//cout<<answer<<endl;
//cout<<"loop:"<<loop<<endl;


//newton
//double limit = pow(10.0,-15.0);
//double answer = 3;
//double diff = 1;
//double target = 100;
//int loop = 0;
//cout.precision(std::numeric_limits<double>::max_digits10);
//while(diff>limit)
//{
//	++loop;
//	answer=answer-(pow(answer,answer)-100)/(pow(answer,answer)*(log(answer)+1));
//	diff=pow(answer,answer)-target;
//	cout<<diff<<endl;
//}


//cout<<"loop:"<<loop<<endl;
//cout<<answer<<endl;


//1.18
//int a,b;
//cout<<"enter:"<<endl;
//cin>>a>>b;
//while(abs(a-b)>=0)
//{	
//	if(a==b)
//	{
//		cout<<a<<endl;
//		break;
//	}
//	else if(a>b)
//	{
//		cout<<b<<endl;
//		++b;
//	}
//	else
//	{
//		cout<<a<<endl;
//		++a;
//	}
//}

//1.19
//int a,b;
//cout<<"enter:"<<endl;
//cin>>a>>b;
//int k=0;
//while(abs(a-b)>=0)
//{	

//	
//	if(k==10)
//	{
//		cout<<endl;
//		k=0;
//	}
//	++k;
//	if(a==b)
//	{	
//		cout<<a;
//		break;
//	}
//	else if(a>b)
//	{
//		cout<<b;
//		++b;
//	}
//	else
//	{
//		cout<<a;
//		++a;
//	}
//}


//1.20
//cout<<"enter:"<<endl;
//int a,b;
//cin>>a>>b;
//int sum=0;
//for(int i=a;i<=b;++i)
//{	
//	cout<<i;
//	sum+=i;
//}
//cout<<sum;


//1.21

//	Sales_item item;
//	while(std::cin>>item)
//	{
//	std::cout<<item<<endl;;
//	}
//
//}




