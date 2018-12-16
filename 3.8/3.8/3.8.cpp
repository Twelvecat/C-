#include <iostream>
using namespace std;
int main() {
	int i = 0;
	int a = 0, n;
	cout << "please input a num:";
	cin >> n;
	do {
		i++;
		a = 0;
		while (a < i){
			if (i % 2) {
				cout << "*";
			}
			else {
				cout << " ";
			}
			a++;
		}
		cout << '\n';
	} while (i < n);
	return 0;
}