double jdz(double val) {
	if (val > 0) return val;
	else { return -val; }
}
double sroot(double val) {
	double i = 1;
	double a;
	do {
		a = i;
		i = (i + val / i) / 2;
	} while (jdz(i - a) > 1.0E-15);
	return i;
}
double area(const double &radius = 0) {
	return radius * radius*3.14159;
}
double area(const double &a=0, const  double &b=0) {
	return a * b;
}
double area(const double &a, const  double &b, const  double &h) {
	return (a + b)*h / 2;
}
double area(const double &a, const  double &b, const  double &h, const  int&) {
	double p = (a + b + h) / 2;
	return sroot(p*(p - a)*(p - b)*(p - h));
}
