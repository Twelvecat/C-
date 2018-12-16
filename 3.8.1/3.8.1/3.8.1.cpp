#include <iostream>
using namespace std;
int main() {
	int i, b, c = 0, a = 0;
	cin >> i;
	b = i;
	do {
		while (a < i) {			
			for(;c < b - i;c++){
				cout << " ";				
			}
			a++;
			cout << "*";
		}
		cout << '\n';
		i -= 1;
		a = 0;
		c = 0;
	} while (a < i);
	

	int h, j, k;
	for (h = 0; h < 9; h++) {
		for (j = 0; j <= h - 1; j++) {
			cout << " ";
		}
		for (k = 0; k < 9 - h; k++) {
			cout << "*";
		}
		cout << '\n';
	}
	return 0;
}