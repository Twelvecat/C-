//计算派的近似值
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	long int i(1);
	double sum(0), pi, term(1.);
	do {
		sum += term;
		i++;
		term = term * (i - 1) / (2 * i - 1.0);
	} while (term >= 1.0e-10);
	pi = 2 * sum;
	cout << i << endl;
	cout << "Pi=" << fixed << setprecision(10) << pi << endl;
	return 0;
}