#pragma once
#include <iostream>
using namespace std;
class Complex;

Complex operator- (const Complex &a, const Complex &b);
Complex operator*(const Complex &a, const Complex &b);
Complex operator/(const Complex &a, const Complex &b);
ostream& operator<<(ostream &os, Complex &rhs);
bool operator==(const Complex &a, const Complex &b);
bool operator!=(const Complex &a, const Complex &b);
class Complex {
public:
//	Complex() = default;
	Complex(double real=0, double imag=0);
	Complex(const Complex &rsh);
	~Complex() {}
	double real() { return m_real; }
	double imag() { return m_imag; }
	static int number();
	void set(double, double);
	void operator=(const Complex &D)
	{
		m_imag = D.m_imag;
		m_real = D.m_real;
	}
	friend ostream& operator<<(ostream &os, Complex &rhs);
	Complex operator+ (const Complex &b);
	friend Complex operator- (const Complex &a, const Complex &b);
	friend Complex operator*(const Complex &a, const Complex &b);
	friend Complex operator/(const Complex &a, const Complex &b);
	friend bool operator==(const Complex &a, const Complex &b);
	friend bool operator!=(const Complex &a, const Complex &b);
private:
	double m_real;
	double m_imag;
	static int num;
};