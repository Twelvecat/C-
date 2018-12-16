//»ØÎÄ¼ì²â×îÖÕ°æ
#include <iostream>
#include <string>
using namespace std;
int main() {
	string carryay;
	int i = 0, len, is_palindrome = 1;
	cout << "Please input a string ..\n";
	getline(cin, carryay);
	len = carryay.length();
	for (i = 0; i < len / 2; i++) {
		if (carryay.at(i) > 64 && carryay.at(i) < 91) {
			if (carryay.at(i) != carryay[len - 1 - i] && (carryay.at(i) != carryay.at(len - 1 - i) - 32)) {
				is_palindrome = 0;
				break;
			}
		}
		if (carryay.at(i) > 96 && carryay.at(i) < 123) {
			if (carryay.at(i) != carryay.at(len - 1 - i) && (carryay.at(i) != carryay.at(len - 1 - i) + 32)) {
				is_palindrome = 0;
				break;
			}
		}
		if (is_palindrome) cout << "Yes";
		else cout << "No";
	}
	return 0;
}