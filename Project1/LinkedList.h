#ifndef LinkedList_h
#define LinkedList_h
#include <iostream>
#include<string>
using namespace std;


class LinkedList {
private:
	struct node
	{
		int num;
		string name;
		node* pt;
		node() = default;
		node(const int& n, const string& s):num(n),name(s),pt(nullptr){}
	};
	node* head=nullptr;
	node* tail=nullptr;
	node* find(const int& n) {
		node* temp = head;
		while (temp) {
			if (temp->num == n)
				return temp;
			else
				temp = temp->pt;
		}
		cout << "no result";
	}
		
public:
	LinkedList();
	void add( const int& n, const string& s);
	void add(istream& is);
	void remove(const int& n);
	void display();
	void reverse();
	void update(const int& i, const string& j);
	void insert(const int&i, const int&j, const string& s);
	void isort();
	void sort();
	int getlength() {
		int l = 0;
		node* temp = head;
		while (temp) {
			++l;
			temp = temp->pt;
		}
		return l;
	}
	int getnum(node* n) {
		return n->num;
	}
	string getname(node* n) {
		return n->name;
	}
	node* gethead() {
		return head;
	}
	node* gettail() {
		return tail;
	}


};






#endif
