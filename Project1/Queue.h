#ifndef Queue_h
#define Queue_h
#include <iostream>
#include <string>
using namespace std;

class Queue {

	struct node {
		string content;
		node* pt;
		node(string c) :content(c),pt(NULL) {};
	};
private:
	node* head;
	node* tail;
public:
	Queue() {};
	void push(const string& s);
	void pop();
	void display();




};

void Queue::push(const string& s) {
	node *temp = new node(s);
	if (head == nullptr) {
		head = temp; 
		tail = temp;
	}
	else {
		tail->pt = temp;
		tail = temp;
	}
	return;
}

void Queue::pop() {
	if (head == NULL||head->pt==NULL) {
		head = NULL;
		tail = NULL;
		cout << "empty queue." << endl;
		return;
	}
	node* temp = head->pt;
	delete head;
	head = temp;
	return;


}


void Queue::display() {
	if (head == NULL) {
		cout << "empty queue" << endl;
		return;
	}
	node* temp = head;
	int i = 1;
	while (temp != tail->pt) {
		cout << i << ": " << temp->content<<endl;
		temp = temp -> pt;
		++i;
	}
	return;

}




#endif // ! Queue_h
