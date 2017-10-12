#include <string>
#include <iostream>
#include <bitset>
#include "leetcode.h"


int hamingdistance(int a, int b){
	int count = 0;
	unsigned long q = a^b;
	while (q >= 1) {
		if (q % 2>0) {
			++count;
			q = q / 2;
		}
		else
			q = q / 2;

	}
	return count;
}
