#ifndef CH7_Screen_h
#define CH7_Screen_h
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Screen;

class Window_mgr {
	vector<Screen> screens;
public:
	Window_mgr();
	typedef  vector<Screen>::size_type ScreenIndex;
	void clear(ScreenIndex);
};




class Screen {
	friend void Window_mgr::clear(ScreenIndex);
public:
	using pos = string::size_type;
	Screen() = default;
	Screen(pos ht, pos wd):height(ht),width(wd),contents(ht*wd,' '){}
	Screen(pos ht, pos wd, char c):height(ht),width(wd),contents(ht*wd,c){}
	char get() const { return contents[cursor]; }
	char get(pos r, pos c) const { return contents[r*width + c]; }
	Screen& display(ostream& os) {
		do_display(os);
		return *this;
	}
	const Screen& display(ostream& os) const {
		do_display(os);
		return *this;
	}
	Screen& set(char);
	Screen& set(pos, pos, char);
	Screen& move(pos, pos);

private:
	pos cursor=0,height=0,width=0;
	string contents;
	void do_display(ostream& os) const { os << contents; }
};

inline Screen& Screen::set(char s) {
	contents[cursor] = s;
	return *this;
}
inline Screen& Screen::set(pos r, pos c, char x) {
	contents[r*width + c] = x;
	return *this;
}
inline Screen& Screen::move(pos r, pos c) {
	cursor = r*width + c;
	return *this;
}
inline void Window_mgr::clear(ScreenIndex i) {
	Screen& s = screens[i];;
	s.contents = string(s.height*s.width, ' ');
}

inline Window_mgr::Window_mgr() {
	screens = { Screen(20,20,'X') };
}


//struct  k {
//	friend void z();
//	void j() { z(); }
//	void g();
//	
//};
//void k::g() { return z(); }
//void z() { cout << "dd"; };

#endif