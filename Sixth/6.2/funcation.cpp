#include"6.2.h"
Complex::Complex(double real, double imag) :m_real(real), m_imag(imag) { ++num; }
Complex::Complex(const Complex &rsh) : m_real(rsh.m_real), m_imag(rsh.m_imag) { ++num; }
void Complex::set(double a, double b){
	m_real = a;
	m_imag = b;
}
ostream& operator<<(ostream &os, Complex &rhs) {
	os << rhs.m_real << "+" << rhs.m_imag << "i";
	return os;
}	
Complex Complex::operator+(const Complex &b) {
	Complex result(this->m_real + b.m_real, (*this).m_imag + b.m_imag);
	return result;
}
Complex operator-(const Complex &a, const Complex &b) {
	Complex result(a.m_real - b.m_real, a.m_imag - b.m_imag);
	return result;
}
Complex operator*(const Complex &a, const Complex &b) {
	Complex result(a.m_real * b.m_real - a.m_imag*b.m_imag, a.m_real * b.m_imag+a.m_imag*b.m_real);
	return result;
}
Complex operator/(const Complex &a, const Complex &b) {
	Complex result((a.m_real * b.m_real - a.m_imag*b.m_imag)/(b.m_imag*b.m_imag+b.m_real*b.m_real), (a.m_imag * b.m_real-a.m_real*b.m_imag) / (b.m_imag*b.m_imag + b.m_real*b.m_real));
	return result;
}
bool operator==(const Complex &a, const Complex &b) {
	if (a.m_imag == b.m_imag&&a.m_real == b.m_real) return true;
	else return false;
}
bool operator!=(const Complex &a, const Complex &b) {
	if (a.m_imag != b.m_imag||a.m_real != b.m_real) return true;
	else return false;
}
int Complex::num = 0;
int Complex::number() { return num; }