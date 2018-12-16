#include "5.4.h"
int main() {
	vector<double>num1, num2;
	char  x;
	string tar;
	int len1, len2;
	while (1) {
		int i = 0;
		char y = '\0';
		getline(cin, tar);
		do {
			x = tar[i];
			if (x >= '0'&&x <= '9'&&y == '\0') {
				num1.push_back(x);
			}
			else if (x >= '0'&&x <= '9') {
				num2.push_back(x);
			}
			else if (x == '+' || x == '-' || x == '*' || x == '/') {
				y = x;
			}
			else if (x == '#') {
				i = -1;
				break;
			}
			++i;
		} while (i != tar.length());
		if (i == -1) break; 
		len1 = num1.size();
		len2 = num2.size();
		value(y, vector_turn_num(num1, len1), vector_turn_num(num2, len2));
		num1.clear();
		num2.clear();
		tar.clear();
	}
	return 0;
}