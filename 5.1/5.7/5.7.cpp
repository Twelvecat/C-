#include<iostream>
#include <stdlib.h>
using namespace std; 
int *index(int array[], const int &num) {
	return &array[num];
}
int main() {
	int Array[] = { 2,4,6,8,10 };
	*index(Array, 3) = 16;
	for (int i = 0; i < 5; i++)
		cout << *index(Array, i) << ' ';
	cout << endl;
	system("pause");
	return 0;
}