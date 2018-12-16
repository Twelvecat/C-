//5*5的下三角行列阵
#include <iostream>
using namespace std;
int main() {
	int a2[5][5] = { 0 };
	int(*p)[5] = a2, i = 0;
	for (; p < a2 + 5; ++p) {
		for (auto q = *p; q < *p + 5; ++q) {
			i += 1;
			*q = i;
		}
	}
	p= a2;
	/*for (; p < a2 + 5; ++p) {
		for (auto q = *p; q < *p + 5; ++q) {
			auto c = (q - a2[0]) % 5, d = (*p - a2[0]) / 5;
			if ((q - a2[0])%5 > (*p - a2[0])/5) {
				*q = 0;
			}
			cout << *q << '\t';
		}
		cout << endl;
	}*/
	int j = 0;
		for (; p < a2 + 5; ++p) {
		for (auto q = *p; q < *p + 5; ++q) {
			auto c = (p[j]-q) % 5, d = (p[j] - *p) / 5;
			if ((p[j]-q)%5 > ((*p) - p[j])/5) {
				*q = 0;
			}
			cout << *q << '\t';
		}
		j += 1;
		cout << endl;
	}
	return 0;
}