#include "family.h"
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

void family::add(string const& lastname, string const& firstname, string birthday) {
	auto kid = make_pair(firstname, birthday);
	_data[lastname].push_back(kid);
}

void family::print() const {

	for (auto const& pair : _data) {
		cout << pair.first << ":"<<endl;
		for (auto const& child : pair.second)
			cout << child.first << ": " << child.second << endl;
	}


}