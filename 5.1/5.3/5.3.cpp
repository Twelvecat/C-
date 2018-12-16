#include <iostream>
#include "5.3.h"
using namespace std;
int main() {
	char st[] = "This is a secret code!";
	cout << st << endl;
	secret(st);
	cout << st << endl;
	desecret(st);
	cout << st << endl;
	return 0;
}