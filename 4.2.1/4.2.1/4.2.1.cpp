#include <iostream>
using namespace std;
int main (){
	int value[10];
	int *p = value;
	int i = 1;
	for (; i <= 10; i++) {
		cout << "请输入第" << i << "个整数" << endl;
		cin >> value[i - 1];
	}
	cout << "反序输出：" << endl;
	for (p = p + 9; i > 1; --i) {
		cout << *p << ' ';
		--p;
	}

	return 0;
}