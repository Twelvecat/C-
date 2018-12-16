#include<iostream>
#include <iomanip>
#include"5.1.h"
using namespace std;
int main() {
	double num;
	cout << "Please input a num :" << endl;
	cin >> num;
	if (num < 0) {
		cout << "Sorry,You are worry.";
	}
	else {
		num = sroot(num);
		cout << fixed << setprecision(10) <<num << endl;
	}
	return 0;
}