//回文检测加强版
#include <iostream>
#include <cstring>
using namespace std;
const int SIZE = 100;
int main() {
	char carryay[SIZE], vol;
	int i = 0, len, is_palindrome = 1;
	cout << "Please input a string ..\n";
	do {
		vol = cin.get();
		if (vol > 64 && vol < 91 || (vol > 96 && vol < 123)) {
			carryay[i] = vol;
			++i;
		}
	} while (vol != EOF);
	carryay[i] = 0;
	len = strlen(carryay);
	for (i = 0; i < len / 2; i++) {
		if (carryay[i] > 64 && carryay[i] < 91) {
			if (carryay[i] != carryay[len - 1 - i]&&(carryay[i] != carryay[len - 1 - i] - 32)){
						is_palindrome = 0;
						break;
			}
		}
		 if (carryay[i] > 96 && carryay[i] < 123) {
				if (carryay[i] != carryay[len - 1 - i]&&(carryay[i] != carryay[len - 1 - i] + 32)){
						is_palindrome = 0;
						break;
				}
	}
	if (is_palindrome) cout << "Yes";
	else cout << "No";
	return 0;
}