#include <iostream>
void main() {
	int num, i, j = 0;
	int a[100];
	std::cin >> num;
	i = num;
	while (i) {
		a[j] = i % 2;
		i /= 2;
		++j;
	}
	for (i = j - 1; i >= 0; i--)
		std::cout << a[i];
}