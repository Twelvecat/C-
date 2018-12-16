//判断一个数的奇偶性
#include <iostream>
using namespace std;
int main() {
	int input;
	cout << "Please input a number：";
	cin >> input;
	if (input % 2) {
		cout << "number" << input << '\t' << "is odd.";
	}
	else {
		cout << "number" << input << '\t' << "is even";
	}
	return 0;
}