#include "6.2.h"
int main() {
	Complex a(1, 2);
	Complex b(2, 0);
	cout << a.number() << endl;
	Complex c;
	c = a + b;
	cout << c << endl;
	c = a - b;
	cout << c << endl;
	c = a * b;
	cout << c << endl;
	c = a / b;
	cout << c << endl;
	c = b;
	cout << c << endl;
	if(c == b)
	cout << "true" << endl;
	if(c != a)
	cout << "False" << endl;
	cout << Complex::number() << endl;
}
