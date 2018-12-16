double jdz(double val) {
	if (val > 0) return val;
	else { return -val; }
}
double sroot(double val) {
	double i = 1;
	double a;
	do{
		a = i;
		i = (i + val / i) / 2;
	} while (jdz(i - a) > 1.0E-10);
	return i;
}
