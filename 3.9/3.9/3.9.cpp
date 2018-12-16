#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	char c;
	int nWhite, nOther, nDigit;
	nWhite = nOther = nDigit = 0;
	c = cin.get();
	while (c != EOF) {
		switch (c) {
		case '0':case '1':case '2':case '3':case '4':
		case '5':case '6':case '7':case '8':case '9':
			nDigit++;
			break;
		case ' ':case '\t':case '\n':
			nWhite++;
			break;
		default:
			nOther++;
			break;
		}
		c = cin.get();
	}
	cout << "Digits=" << '\t' << nDigit << '\n';
	cout << "White=" << '\t' << nWhite << '\t';
	cout << "Other=" << '\t' << nOther << '\n';
	system("pause");
	return 0;
}