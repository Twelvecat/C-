#include <iostream>
using namespace std;
int main() {
	int i, a;
	cout << "请输入一个范围：";
	cin >> a;
	cout << a << "以内3的倍数是：" << endl;
	for (i = 1; i <= a; i++) {
		if (i % 3 == 0) {
			cout << i << '\t';
		}
	}
	cout << '\n' <<  a << "以内7的倍数是：" << endl;
	for (i = 1; i <= a; i++) {
		if (i % 7 == 0) {
			cout << i << '\t';
		}
	}
	cout << '\n' <<  a << "以内3和7的倍数是：" << endl;
	for (i = 1; i <= a; i++) {
		if (i % 21 == 0) {
			cout << i << '\t';
		}
	}
	return 0;
}