#include<iostream>
#include "5.8.h"
using namespace std;
int main() {
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << area(a) << endl;
	cout << area(a,b) << endl;
	cout << area(a,b,c) << endl;
	cout << area(a,b,c,d) << endl;
	return 0;
}