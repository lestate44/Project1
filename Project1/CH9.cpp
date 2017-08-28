//#include<iostream>
//#include<vector>
//#include<string>
//#include<list>
//#include<deque>
//#include<forward_list>
//#include<array>
//using namespace std;
//
////9.4
//bool finde(vector<int>::iterator begin, vector<int>::iterator end, int k) {
//	while (begin != end) {
//		if (*begin == k)
//			return  true;
//		++begin;
//	}
//	return false;
//}
//
////9.5
//vector<int>::iterator findr(vector<int>::iterator begin, vector<int>::iterator end, int k) {
//	while (begin != end) {
//		if (*begin == k)
//			return  begin;
//		++begin;
//	}
//	return end;
//}
//
////9.18
//void deq(istream& is) {
//	deque<string> dq;
//	while (is) {
//		string s;
//		is >> s;
//		dq.push_back(s);
//	}
//	for (auto iter = dq.begin(); iter != dq.end(); ++iter)
//		cout << *iter << endl;
//}
//
////9.19
//void lst(istream& is) {
//	list<string> ls;
//	while (is) {
//		string s;
//		is >> s;
//		ls.push_back(s);
//	}
//	for (auto iter = ls.cbegin(); iter != ls.end(); ++iter)
//		cout << *iter << endl;
//
//}
//
////9.20
//void copy(list<int>& ori, list<int>& odd, list<int>& even) {
//	for (auto iter = ori.begin(); iter != ori.end(); ++iter) {
//		(*iter % 2) == 0 ? even.push_back(*iter) : odd.push_back(*iter);
//	}
//}
////9.27
//void clearodd(forward_list<int>& fl) {
//	auto prev = fl.before_begin();
//	auto curr = fl.begin();
//	for (; curr != fl.end();)
//		if (*curr % 2 == 0) {
//			prev = curr;
//			++curr;
//		}
//		else
//			curr = fl.erase_after(prev);
//
//}
////9.28
//void fflist(forward_list<string>& fl, string a, string b) {
//	auto prev = fl.before_begin();
//	for (auto i = fl.begin(); i != fl.end(); ++i,++prev) {
//		if (*i == a) {
//			i=fl.insert_after(i,b);
//			return;
//		}
//	}
//	fl.insert_after(prev, b);
//	return;
//
//}
//
//void replace(string& s, const string& oldVal, const string& newVal)
//{
//	auto curr = s.begin();
//	while (curr != s.end() - oldVal.size())
//	{
//		if (oldVal == string(curr, curr + oldVal.size()))
//		{
//			curr = s.erase(curr, curr + oldVal.size());
//			curr = s.insert(curr, newVal.begin(), newVal.end());
//			curr += newVal.size();
//		}
//		else
//		{
//			++curr;
//		}
//	}
//}
//
//string calc(string l, string r, string op)
//{
//	string s;
//	if (op == "-")
//		s = to_string(stoi(l) - stoi(r));
//	return s;
//}
//
//int main(void) {
//
//
////9.2
//	//list<deque<int>> s;
//
////9.4
//	//vector<int> k{ 1, 2, 3, 4, 5 };
//	//cout<<finde(k.begin(), k.end(), 4);
//	//vector<int>::const_iterator ssz = k.begin();
//	//++ssz;
////9.5
//	//cout<<*findr(k.begin, k.end, 3);
//	//vector<int>::iterator ki;
//	//ki = findr(k.begin(), k.end, 3);
//
//	//vector<int> a1{1,2,3,4,5};
//
//	//vector<int>::iterator st = a1.begin();
//	//vector<int>::iterator en = a1.begin()+2;
//
//	//vector<int> a2(st,en);
//
//
////9.14
//	//list<char*> cl { "s","sdfd" };
//
//	//
//	//vector<string>sl(cl.begin(), cl.end());
//	//sl.assign(cl.begin(),cl.end());
//
//
////9.18
//	//deq(cin);
////9.19
//	//lst(cin);
//
////9.20
//	//list<int> ori{1,2,3,4,5,6,7,8};
//	//list<int> odd;
//	//list<int> even;
//	//copy(ori , odd, even);
//	//for (auto i:even)
//	//	cout << i << endl;
//	//for (auto i:odd)
//	//	cout << i << endl;
//
//	//vector<int> vs(2, 3);
//	//cout << vs.at(1);
//
//
//
////9.26
//	//int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
//
//	//vector<int> iav(ia, end(ia));
//	//list<int> lst(iav.begin(), iav.end());
//	//for (auto i=iav.begin();i!=iav.end();)
//	//	(*i) % 2 == 0 ? i=iav.erase(i) : ++i;
//	//for (auto i = lst.begin(); i != lst.end();)
//	//	*i % 2 == 0 ? ++i : i=lst.erase(i);
//
//	//for (auto i : iav)
//	//	cout << i << endl;
//
//
//	//for (auto j : lst)
//	//	cout << j << endl;
//
//
//
////9.27
//
//	//forward_list<int> flst = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//clearodd(flst);
//	//for (auto i : flst)
//	//	cout << i << endl;
//
//
////9.28
//	//forward_list<string> flst{"a","bcd","ed","eds","sed","d"};
//	//fflist(flst, "kk", "kk");
//	//for (auto i : flst)
//	//	cout << i << endl;
//	
//
//////9.31
////	list<int> lst{ 1,2,3,4,5,6,7,8,9 };
////	auto iter = lst.begin();
////	while (iter != lst.end()) {
////		if (*iter % 2) {
////			iter = lst.insert(iter, *iter);
////			iter = ++iter;
////		}
////		else
////
////
////	}
////
//
//
//
////9.34
//	//list<int> lst{ 12,3,4,5,6,7 };
//	//auto iter = lst.begin();
//	////auto ed = lst.end();
//	////ed = --ed;
//	////cout << *ed << endl;
//	//while (iter != lst.end()) {
//	//	if (*iter % 2) {
//	//		iter = lst.insert(iter, *iter);
//	//		++iter;
//	//	}
//	//		
//	//	
//	//	++iter;
//	//	cout << lst.size() << endl;
//	//}
//
//
////vector<int> s;
////for (int i = 0; i < 24; ++i)
////	s.push_back(i);
////cout << s.capacity();
////s.shrink_to_fit();
////cout << s.capacity();
////s.resize(25);
////cout << s.capacity();
//
//
////9.38
//	//vector<int> s;
//	//for (int i = 0; i != 30; ++i) {
//	//	cout << "capacity: " << s.capacity() << "size: " << s.size() << endl;
//	//	s.push_back(i);
//	//	
//	//}
//
//
//
////string k("abcdefg");
////string s(k, 0, 3);
////cout << s;
//
//
//
////string s("abcdefg");
////auto pos = s.find("e");
////cout << pos;
//
//
//string numbers("0123456789"), name("3d2");
//auto pos = name.find_first_of(numbers);
////double d = stod(name);
////cout << d;
//
//
//auto iter = numbers.begin();
//string s(3, *iter);
//cout << s;
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}