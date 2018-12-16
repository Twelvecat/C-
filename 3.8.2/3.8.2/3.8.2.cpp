#include <iostream>
using namespace std;
int main() {
	int i, a, b, c;
	cin >> c;
	for (i = 1; i <= c; i++) {
		for (a = 1; a <= c - i; a++) {
			cout << " ";
		}
		for (b = 1; b <= i * 2 - 1; b++) {
			cout << "*";
		}
		cout << '\n';
	}
	return 0;
}