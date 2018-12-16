#ifndef RECT_T
#define RECT_T
#include <iostream>
using namespace std;
class Rectangle {
	int m_left, m_top;
	int m_right, m_bottom;
public:
	explicit	Rectangle(int left=0, int top=0, int right=0 ,int bottom=0);
	Rectangle(const Rectangle &rhs);
	~Rectangle() { cout << "DEATH" << endl; }
	void show();
	void assign(int left, int top, int right, int bottom);
	int area();
	int perimeter();
};
#endif