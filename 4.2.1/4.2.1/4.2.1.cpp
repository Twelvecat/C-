#include <iostream>
using namespace std;
int main (){
	int value[10];
	int *p = value;
	int i = 1;
	for (; i <= 10; i++) {
		cout << "�������" << i << "������" << endl;
		cin >> value[i - 1];
	}
	cout << "���������" << endl;
	for (p = p + 9; i > 1; --i) {
		cout << *p << ' ';
		--p;
	}

	return 0;
}