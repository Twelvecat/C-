#include<iostream>
#include<stdlib.h>
using namespace std;
int index(int array[], int size, int sub);
int main() {
	int array2[25] = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97 };
	int size = 25, sub;
	do {
		cin >> sub;
		if (sub == 1)break;
		sub = index(array2, size, sub);
		if (sub != -1)
			cout << "对应元素下标为：" << sub << endl;
		else
			cout << "未找到。" << endl;
	} while (1);
		system("pause");
	return 0;
}
int index(int array[], int size, int sub) {
	int temp = sub;
	sub = -1;
	for (int i=0;i<size;++i)
		if (array[i] == temp) {
			sub = i;
			break;
		}
	return sub;
}