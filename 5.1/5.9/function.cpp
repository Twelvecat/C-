double value(const double &n, const double &x) {
	double num;
	if (n == 0) {
		return 1;
	}
	else if (n == 1) {
		return x;
	}
	return (value(n - 1, x)*(2 * n - x) - (n - 1)*value(n - 2, x)) / n;
}