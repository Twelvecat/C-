#include <iostream>
using namespace std;
int main() {
	int value[10];
	for (int i = 1; i <= 10; i++) {
		cout << "请输入第" << i << "个整数" << endl;
		cin >> value[i - 1];
	}
	cout << "反序输出：" << endl;
	for (int i = 9; i >= 0; i--) {
		cout << value[i] << ' ';
	}
	return 0;
}