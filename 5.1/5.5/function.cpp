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
	cout << "最大元素的行和列是" << a << '\t' << b << endl;
	return(max);
}