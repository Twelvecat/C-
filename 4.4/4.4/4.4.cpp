//╩ьнд╪Л╡Б
#include <iostream>
#include <cstring>
using namespace std;
const int SIZE = 100;
int main() {
	char carryay[SIZE];
	int i, len, is_palindrome = 1;
	cout << "Please input a string ..\n";
	cin.get(carryay, SIZE);
	len = strlen(carryay);
	for (i = 0; i < len / 2; i++) {
		if (carryay[i] != carryay[len - 1 - i]) {
			is_palindrome = 0;
			break;
		}
	}
	if (is_palindrome) cout << "Yes";
	else cout << "No";
	return 0;

}