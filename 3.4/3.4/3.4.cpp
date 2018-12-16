//判断一个数是否是3或者7的倍数
#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "Please input a number:" << endl;
	cin >> num;
	if (num % 3 == 0)
		if (num % 7 == 0)
			cout << "是3和7的倍数" << endl;
		else {
			cout << "是3 的倍数但不是7的倍数" << endl;
		}
	else if (num % 7 == 0) {
		cout << "是7的倍数但不是3的倍数";
	}
	else {
		cout << "不是3的倍数也不是7的倍数";
	}
	return 0;
}