#include <iostream>
using namespace std;
int main() {
	int i, a;
	cout << "������һ����Χ��";
	cin >> a;
	cout << a << "����3�ı����ǣ�" << endl;
	for (i = 1; i <= a; i++) {
		if (i % 3 == 0) {
			cout << i << '\t';
		}
	}
	cout << '\n' <<  a << "����7�ı����ǣ�" << endl;
	for (i = 1; i <= a; i++) {
		if (i % 7 == 0) {
			cout << i << '\t';
		}
	}
	cout << '\n' <<  a << "����3��7�ı����ǣ�" << endl;
	for (i = 1; i <= a; i++) {
		if (i % 21 == 0) {
			cout << i << '\t';
		}
	}
	return 0;
}