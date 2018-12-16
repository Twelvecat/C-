#include "6.1.h"
#include<stdlib.h>
void see() {
	Rectangle c;
}
int main() {
	Rectangle rect;
	Rectangle c = static_cast<Rectangle>(7);
	c.show();
	rect.show();
	rect.assign(100, 200, 300, 400);
	rect.show();
	Rectangle rect1(0, 0, 200, 200);
	rect1.show();
	rect1 = rect;
	rect1.show();
	rect1.assign(100, 200, 300, 400);
	cout << "Area of rect:" << rect.area() << "Perimeter of rect:" << rect.perimeter() << endl;
	see();
	system("pause");
	return 0;
}