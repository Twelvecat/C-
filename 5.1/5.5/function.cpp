#include "5.5.h"
int max_value(const int array[][4], int n) {
	int i, j, max = array[0][0], a, b;
	for (i = 0; i < n; i++)
		for (j = 0; j < 4; ++j)
			if (array[i][j] > max) {
				max = array[i][j];
				a = i;
				b = j;
			}
	cout << "���Ԫ�ص��к�����" << a << '\t' << b << endl;
	return(max);
}