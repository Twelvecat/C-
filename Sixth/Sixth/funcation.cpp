#include "6.1.h"
Rectangle::Rectangle(int left, int top, int right, int bottom) :m_left(left), m_right(right), m_top(top
), m_bottom(bottom) {};
void Rectangle::show() {
	cout << "left-top point is(" << m_left << "," << m_top << ")" << '\n';
	cout << "right-bottom point is(" << m_right << "," << m_bottom << ")" << '\n';
}
void Rectangle::assign(int left, int top, int right, int bottom) {
	m_left = left;
	m_right = right;
	m_top = top;
	m_bottom = bottom;
}
 Rectangle::Rectangle(const Rectangle &rhs):m_left(rhs.m_left), m_right(rhs.m_right), m_top(rhs.m_top
), m_bottom(rhs.m_bottom) {};
int Rectangle::area() {
	return (m_right - m_left)*(m_bottom - m_top);
}
int Rectangle::perimeter() {
	return 2 * ((m_right - m_left)+(m_bottom - m_top));
}