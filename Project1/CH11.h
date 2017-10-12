#ifndef CH11_h
#define CH11_h
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


string low(string& s) {
	for (auto &i : s)
		i = tolower(i);
	return s;
}


string pun(string& s) {
	s.erase(remove_if(s.begin(), s.end(), ispunct), s.end());
	return s;


}














#endif // !"CH11.h"
