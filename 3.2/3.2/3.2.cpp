//求解一元二次方程if-else
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a, b, c, d;
	cout << "Pleast input a ,b ,c:" << endl;
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	if (a != 0) {
		if (d >= 0) {
			if (d == 0) {
				double x = -b / 2 * a;
				cout << "x1=x2=" << x << endl;
			}
			else {
				double x1, x2;
				x1 = (-b + sqrt(d)) / 2 * a;
				x2 = (-b + sqrt(d)) / 2 * a;
				cout << "x1=" << x1 << endl;
				cout << "x2=" << x2 << endl;
			}
		}
		else {
			double f = 4 * a * c - b * b;
			double g = -b / 2 * a;
			double h = sqrt(f) / 2 * a;
			cout << "x1=" << g << "+" << h << "i" << endl;
			cout << "x2=" << g << "-" << h << "i" << endl;
		}
	}
	else {
		double x0;
		x0 = -c / b;
		cout << "x=" << x0;
	}
	return 0;
}