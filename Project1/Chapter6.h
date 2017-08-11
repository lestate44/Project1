#pragma once
//#include <iostream>
//#include <string>
//#include <vector>
//int fact(int k)
//{
//	int di = k;
//	int res = k;
//	while (di != 1)
//	{
//		res *= (di - 1);
//		di = --di;
//	}
//	return res;
//}

int fact(int val);
int func();
//double abss(double k) {
//		return k > 0 ? k : -k;
//	}
template <typename T>
T abss(T i)
{
	return i >= 0 ? i : -i;
}
//int cnt(void) {
//	static int ct = 0;
//	return ++ct;
//
//}