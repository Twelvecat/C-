//�ж�һ�����Ƿ���3����7�ı���
#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "Please input a number:" << endl;
	cin >> num;
	if (num % 3 == 0)
		if (num % 7 == 0)
			cout << "��3��7�ı���" << endl;
		else {
			cout << "��3 �ı���������7�ı���" << endl;
		}
	else if (num % 7 == 0) {
		cout << "��7�ı���������3�ı���";
	}
	else {
		cout << "����3�ı���Ҳ����7�ı���";
	}
	return 0;
}