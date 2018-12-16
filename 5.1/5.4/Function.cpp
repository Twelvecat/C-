#include "5.4.h"
double add(const double &a, const double &b) {
	return a + b;
}
double minu(const double &a, const double &b) {
	return a - b;
}
double multiply(const double &a, const double &b) {
	return a * b;
}
double divide(const double &a, const double &b) {
	return a / b;
}
void value(const char &y,const double &a,const double &b) {
	switch (y)
	{
	case '+':cout << add(a, b) << endl;
		break;
	case '-':cout << minu(a, b) << endl;
		break;
	case '*':cout << multiply(a, b) << endl;
		break;
	case '/':
		if (b == 0) {
			cout << "error" << endl;
			break;
		}
		else {
			cout << divide(a, b) << endl;
			break;
		}
	default:
		break;
	}
}
double vector_turn_num(vector<double>num2,const int &len2) {
	double b = 0;
	for (int k = 0; k < len2; ++k) {
		b += (num2.at(len2 - 1 - k) - 48)*pow(10, k);
	}
	return b;
}
