#include "5.3.1.h"
int main() {
	string st;
	int m;
	getline(cin, st);
	cin >> m;
	cout << st << endl;
	cout << secret(&st, m) << endl;
	cout << desecret(st, m) << endl;
	return 0;
}