#include <iostream>
using namespace std;
int main() {
	int value[10];
	for (int i = 1; i <= 10; i++) {
		cout << "�������" << i << "������" << endl;
		cin >> value[i - 1];
	}
	cout << "���������" << endl;
	for (int i = 9; i >= 0; i--) {
		cout << value[i] << ' ';
	}
	return 0;
}