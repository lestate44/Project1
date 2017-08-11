#include "LinkedList.h"
#include <string>
#include <iostream>
using namespace std;


LinkedList::LinkedList() {
	//head = new node(0);
}

void LinkedList::add(const int& n, const string& s) {
	
	if (head == NULL)
	{
		
		head = new node(n,s);
		tail = head;
	}
	else {
		node* temp = new node(n,s);
		if (head->pt == NULL) {
			head->pt = temp;
			tail = temp;
		}
		else
		{
			tail->pt = temp;
			tail = temp;
		}
			
		
		
	}

}

void LinkedList::add(istream& is) {
	string s;
	int n;
	cout << "enter number, string:" << endl;
	is >> n >> s;
	node x(n, s);
	node *temp =new node(n,s);
	//if (head == NULL)
	//{	
	//	head = new node;
	//	head = &x;    //wrong! reference of local variable x (address) will be lost out of function
	//	*head = x; //wrong! uninitialized local variable 'head'
	//	tail = &x;
	//}
	//else {
	//	tail->pt = &x;
	//	tail = &x;
	//}
	if (head == NULL)
	{
		/*head = new node();
		*head = x;*/
		head = temp;
		tail = head;
	}
	else {
		if (head->pt == NULL) {
			head->pt = temp;
			tail = temp;
		}
		else
		{
			tail->pt = temp;
			tail = temp;
		}
	}
	cout << "continue?" << endl;
	char c;
	is >> c;
	if (c == 'y')
		add(is);
}

void LinkedList::display() {
	node* p = head;
	while (p!=nullptr) {
		cout << "num: " << p->num << endl;
		cout << "string: " << p->name << endl;
		p = p->pt;


	}
}


void LinkedList::remove(const int& n) {
	node* temp = head;
	while (temp) {
		if (head->num == n) {
			head = head->pt;
			delete temp;
			break;
		}
		if (temp->pt->num == n) {
			node* td = temp->pt;
			if (temp->pt == tail)
				tail = temp;
			temp->pt = temp->pt->pt;
			delete td;
			break;
		}
		temp = temp->pt;
	}
}

void LinkedList::reverse() {

	if (head == tail) {
		cout << "only one element or empty" << endl;
		return;
	}
	tail = head;
	node* temp1 = head;
	node* temp2 = head->pt;
	node* temp3 = head->pt->pt;
	temp1->pt = nullptr;
	tail = temp1;
	if (temp2->pt == NULL) {
		temp2->pt = temp1;
		head = temp2;
		return;
	}

	while (temp3) {
		temp2->pt = temp1;
		temp1 = temp2;
		temp2 = temp3;
		temp3 = temp3->pt;
		
	}
	temp2->pt = temp1;
	head = temp2;
	return;

}

void LinkedList::update(const int& i, const string& j) {
	node* t = find(i);
	t->name = j;
	return;
}

void LinkedList::insert(const int&i, const int&j, const string& s) {
	node* l = find(i);
	node* n = l->pt;
	l->pt = new node(j,s);
	l->pt->pt = n;
	if (n == NULL)
		tail = l->pt;
	return;

}


void LinkedList::isort() {
	if (head->pt == NULL)
		return;
	node* pos = head->pt;
	node* pre = head;
	//node* start = head->pt;
	
	while (pos)
	{
		node* top = head;
		if (pos->num >= pre->num) {
			pos = pos->pt;
			pre = pre->pt;
		}
		else {
			node* cur = top;
			node* cpre = new node();
			cpre->pt = top;
			while (cur!=pos)
			{
				if (cur->num <= pos->num)
				{
					cpre = cpre->pt;
					cur = cur->pt;
				}
				else {
					if (cur == top) {
						pre->pt = pos->pt;
						pos->pt = top;
						head = pos;
						pos = pre->pt;
						break;
					}
					pre->pt = pos->pt;
					pos->pt = cur;
					cpre->pt = pos;
					pos = pre->pt;
					break;
				}
			}
		}
	}
}

void LinkedList::sort() {
	if (head == NULL || head->pt == NULL)return ;
	node *p = head->pt, *pstart = new node(), *pend = head;
	pstart->pt = head; //为了操作方便，添加一个头结点
	while (p != NULL)
	{
		node *tmp = pstart->pt, *pre = pstart;
		while (tmp != p && p->num >= tmp->num) //找到插入位置
		{
			tmp = tmp->pt; pre = pre->pt;
		}
		if (tmp == p)pend = p;
		else
		{
			pend->pt = p->pt;
			p->pt = tmp;
			pre->pt = p;
		}
		p = pend->pt;
	}
	head = pstart->pt;
	delete pstart;
	
}



