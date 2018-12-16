/*求一元二次方程的根*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a, b, c, d;
	cout << "请输入a，b，c：";
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	if (a == 0) {
		double e = -c / b;
		cout << "x=" << e;
	}
	else if (d > 0) {
		double x1, x2;
		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b - sqrt(d)) / 2 * a;
		cout << "x1=" << x1 << endl;
		cout << "x2=" << x2 << endl;
	}
	else if (d == 0){
		double x;
		x = -b / 2 * a;
		cout << "x1=x2=" << x;
	}
	else {
		double f = 4 * a * c - b * b;
		double g = -b / 2 * a;
		double h = sqrt(f) / 2 * a;
		cout << "x1=" << g << "+" << h << "i" << endl;
		cout << "x2=" << g << "-" << h << "i" << endl;
	}
	return 0;
	}