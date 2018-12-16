//根据分数求等级if-else
#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
int main() {
	int verb, i, a, b, c, d, f;
	a = b = c = d = f = 0;
	srand(time(0));
	for (i = 0; i < 100; i++){
		verb = rand() % 100;
	if (verb >= 90) {
		//cout << "gradeA" << endl;
		a += 1;
	}
	else if (verb >= 80) {
		//cout << "gradeB" << endl;
		b += 1;
	}
	else if (verb >= 70) {
		//cout << "gradeC" << endl;
		c += 1;
	}
	else if (verb >= 60) {
		//cout << "gradeD" << endl;
		d += 1;
	}
	else {
		//cout << "Failed" << endl;
		f += 1;
	}
	}
	cout << "A有：" << a << endl;
	cout << "B有：" << b << endl;
	cout << "C有：" << c << endl;
	cout << "D有：" << d << endl;
	cout << "Failed有：" << f << endl;
	return 0;
}