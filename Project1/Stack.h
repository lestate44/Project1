#ifndef Stack_h
#define Stack_h
#include <iostream>
#include <string>
using namespace std;

class Stack {

	struct node {
		string c;
		node* pt;
		node(const string& ch):c(ch) {}
	};

private:
	node* head;
	node* tail;

public:
	Stack() {};
	void push(const string& ch) {
		node* temp = new node(ch);
		if (head == NULL) {
			//head = new node('a');
			head = temp;
			tail = temp;
		}
		else {
			tail->pt = temp;
			tail = temp;
			tail->pt = NULL;
		}
	}
	string pop() {
		if (head == NULL) {
			cout << "empty";
			return "";
		}
		node* s=head;
		while (s->pt != tail) {
			s = s->pt;
		}
		string ts = tail->c;
		delete tail;
		s->pt = NULL;
		tail = s;
		return ts;
	}

	void display() {
		if (head == NULL)
			return;
		node* i = head;
		int j = 1;
		while (i!= NULL) {
			cout <<j<<":"<< i->c<<endl;
			i = i->pt;
			++j;
		}
		return;
	}
	void showtail() {
		cout << tail->c;
	}
	void showhead() {
		cout << head->c;
	}


};







#endif // !Stack_h
