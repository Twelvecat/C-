#include <iostream>
using  namespace std;
int main() {
	int num1, num2, num3;
	int max, min;
	cout << "Please input 3 integers: \n";
	cin >> num1 >> num2 >> num3;
	if (num1 > num2) {
		max = num1;
		min = num2;
	}
	else {
		max = num2;
		min = num1;
	}
	if (num3 > max) {
		cout << num3 << '\t' << max << '\t' << min << '\n';
	}
	else if (num3 > min) {
		cout << max << '\t' << num3 << '\t' << min << '\n';
	}
	else {
		cout << max << '\t' << min << '\t' << num3 << '\n';
	}
	return 0;
}