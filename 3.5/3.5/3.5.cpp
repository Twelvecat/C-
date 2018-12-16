//´óÐ¡Ð´×Ö·û×ª»»
#include <iostream>
using namespace std;
int main() {
	int cnt = 0;
	char x;
	do {
		x = cin.get();
		if (x > 96) {
			char y = x - 32;
			cout << y << '\r';
		}
		else if(x > 64) {
			char z = x + 32;
			cout << z << '\r';
		}
		else continue;
	}while (x != EOF);
	system("pause");
	return 0;
}