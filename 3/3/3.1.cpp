//�ж�һ��������ż��
#include <iostream>
using namespace std;
int main() {
	int input;
	cout << "Please input a number��";
	cin >> input;
	if (input % 2) {
		cout << "number" << input << '\t' << "is odd.";
	}
	else {
		cout << "number" << input << '\t' << "is even";
	}
	return 0;
}