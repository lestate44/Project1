#ifndef CH13_h
#define CH13_h
#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include <cstring>
#include <set>
using namespace std;
class HasPtr {
public:
	HasPtr(const string& s = string()) :
		ps(new string(s)), i(0) { }
	HasPtr(const HasPtr& hp):ps(new string(*hp.ps)),i(hp.i){}
	HasPtr& operator=(const HasPtr& hp)
	{
		string* newps = new string(*hp.ps);
		delete ps;
		/**ps = *hp.ps;*/
		i = hp.i;
		return *this;
	}
	void show() { cout << *ps<<" at: "<<ps; }
	~HasPtr()
	{
		delete ps;
	}

private:
	string *ps;
	int i;
};



class Book
{
	char* bookName;
public:
	Book(const char* name)
	{
		bookName = new char[strlen(name) + 1];
		strcpy(bookName, name);
	}
	~Book()
	{
		cout << "destructor called"<<endl;
		delete[]bookName;
	}


};

class numbered
{	
	friend void f(numbered s);
	friend void ff(const numbered&);
	static int num;
	int mysn;
public:
	numbered()
	{
		cout << "original constructor" << endl;
		mysn = num++;
	}
	numbered(numbered&)
	{
		cout << "copy constructor" << endl;
		mysn = num++;
	}


};
int numbered::num = 0;

void f(numbered s)
{
	cout << s.mysn << endl;
}

void ff(const numbered& s)
{
	cout << s.mysn << endl;
}


class Employee
{
	static int id;
	string name;
public:
	Employee()
	{
		id +=1 ;
	};
	Employee(const string& s)
	{
		id +=1 ;
		name = s;
	}
	void getid()
	{
		cout << id << endl;
	}
	void getname()
	{
		cout << name << endl;
	}

};

int Employee::id = 0;


class HasPtrNew
{
	string *ps;
	int i;
	size_t *use;
public:
	friend void swap(HasPtrNew&, HasPtrNew&);
	HasPtrNew(const string& s=string()) :ps(new string(s)), i(0), use(new  size_t(1)) {}
	HasPtrNew(const HasPtrNew &p) :ps(p.ps), i(p.i), use(p.use) { ++*use; }
	HasPtrNew& operator = (const HasPtrNew&);
//	HasPtrNew& operator = (HasPtrNew);
	~HasPtrNew();
	void show()
	{
		cout << *ps << " for " << *use << " times " << endl;
	}

};

inline void swap(HasPtrNew& p1, HasPtrNew& p2)
{
	swap(p1.ps, p2.ps);
	swap(p1.i, p2.i);
}

HasPtrNew::~HasPtrNew()
{
	if (--*use == 0)
	{
		delete ps;
		delete use;
	}
}

//
//HasPtrNew& HasPtrNew::operator=(HasPtrNew rhs)
//{	
//	//rhs.show();
//	swap(*this, rhs);
//	rhs.show();
//	if (*rhs.use == 0)
//	{
//		delete rhs.ps;
//		delete rhs.use;
//	}
//	rhs.show();
//	return *this;
//}


HasPtrNew& HasPtrNew::operator = (const HasPtrNew& rhs)
{
	++*rhs.use;
	if (--*use == 0)
	{
		delete ps;
		delete use;
	}
	ps = rhs.ps;
	i = rhs.i;
	use = rhs.use;
	return *this;
}



class TreeNode
{
	string value;
	int *count;
	TreeNode *left;
	TreeNode *right;
public:
	TreeNode(const string& s=string()) :value(s), count(new int(1)), left(nullptr), right(nullptr) {};
	TreeNode(const TreeNode& rhs) :value(rhs.value), count(rhs.count), left(rhs.left), right(rhs.right) { ++*count; };
	TreeNode& operator = (const TreeNode&);
	~TreeNode()
	{
		if (--*count == 0)
		{
			if (left)
			{
				delete left;
				left = nullptr;
			}
			if (right)
			{
				delete right;
				right = nullptr;
			}
			delete count;
			count = nullptr;
		}
	}

};

TreeNode& TreeNode::operator=(const TreeNode& rhs)
{
	++*rhs.count;
	if (--*count == 0)
	{
		if (left)
		{
			delete left;
			left = nullptr;
		}
		if (right)
		{
			delete right;
			right = nullptr;
		}
	}
	value = rhs.value;
	left = rhs.left;
	right = rhs.right;
	count = rhs.count;
	return *this;
}


class BinStrTree
{
	TreeNode* root;
public:
	BinStrTree() :root(new TreeNode()) {};
	BinStrTree(const BinStrTree& bst) :root(new TreeNode(*bst.root)) {};
	BinStrTree& operator=(const BinStrTree &bst);
	~BinStrTree() { delete root; };

};

BinStrTree& BinStrTree::operator=(const BinStrTree &bst)
{
	TreeNode* new_root = new TreeNode(*bst.root);
	delete root;
	root = new_root;
	return *this;
}




class HasPtrSe
{
	int i;
	string* ps;
public:
	friend void swap(HasPtrSe&, HasPtrSe&);
	friend bool operator<(const HasPtrSe& p1, const HasPtrSe& p2);
	HasPtrSe(const string& s = string()) :ps(new string(s)), i(0) {};
	HasPtrSe(const HasPtrSe& hp) :ps(new string(*hp.ps)), i(0) {};
	//HasPtrSe& operator = (const HasPtrSe& hp) : ps(new string(*hp.ps)), i(hp.i) {};
	HasPtrSe& operator = (HasPtrSe tmp)
	{
		this->swap(tmp);
		return *this;
	}
	void swap(HasPtrSe &pt)
	{
		std::swap(ps, pt.ps);
		std::swap(i, pt.i);
		cout << "call swap(HasPtrSe&)" << endl;
	}
	void show() 
	{
		cout << *ps << endl;
	}


};


void swap(HasPtrSe& hp1, HasPtrSe& hp2)
{
	hp1.swap(hp2);
}

bool operator<(const HasPtrSe& p1, const HasPtrSe& p2)
{
	return *p1.ps < *p2.ps;
}



class Folder;


class Message
{	
	friend class Folder;
	string contents;
	set<Folder*> folders;
public:
	explicit Message(const string& s = string()) :contents(s) {};
	Message(const Message&);
	Message& operator=(const Message&);
	~Message();
	void save(Folder&);
	void remove(Folder&);


};


class Folder

{
	set<Message*> messages;
	string name;
public:
	explicit Folder(const string& s = string()) :name(s) {};
};


#endif // !CH13_h
