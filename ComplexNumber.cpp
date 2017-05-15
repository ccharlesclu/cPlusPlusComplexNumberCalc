#include "ComplexNumber.h"
#include <cmath>

// --constructors
ComplexNumber::ComplexNumber()
{
}
ComplexNumber::ComplexNumber(double r, double i)
{
	this->re = r; // -- this-> not necessary
	this->im = i;
}
ComplexNumber::ComplexNumber(const ComplexNumber &cn)
{
	this->re = cn.re;
	this->im = cn.im;
}

// --destructor
ComplexNumber::~ComplexNumber()
{
}

// --mutators
void ComplexNumber::setR(double r)
{
	this->re = r;
}
void ComplexNumber::setI(double i)
{
	this->im = i;
}

// --accessors
double ComplexNumber::getR()
{
	return re;
}
double ComplexNumber::getI()
{
	return im;
}

// --message handlers
void ComplexNumber::print()
{
	if (im < 0) { std::cout << re << " - " << -im << "i" << std::endl;}
	else {std::cout << re << " + " << im << "i" << std::endl;}
}
ComplexNumber ComplexNumber::add(const ComplexNumber &rhs)
{
	return ComplexNumber(this->re + rhs.re, this->im + rhs.im); // -- this-> not necessary
}
ComplexNumber ComplexNumber::sub(const ComplexNumber &rhs)
{
	return ComplexNumber(this->re - rhs.re, this->im - rhs.im);
}
ComplexNumber ComplexNumber::mult(const ComplexNumber &rhs)
{
	double a = this->re, b = rhs.re, c = this->im, d = rhs.im;
	return ComplexNumber(((a*c)-(b*d)), ((a*d)+(b+c)));
}
ComplexNumber ComplexNumber::div(const ComplexNumber &rhs)
{
	double a = this->re, b = rhs.re, c = this->im, d = rhs.im;
	return ComplexNumber((((a*c) + (b*d))/((c*c) + (d*d))), (((b*c) - (a*d))/((c*c) + (d*d))));
}
ComplexNumber ComplexNumber::conj()
{
	return ComplexNumber(re, -im);
}
ComplexNumber ComplexNumber::sqrt()
{
	double a = re, b = im;
	double top = std::sqrt((a*a)+(b*b));
	return ComplexNumber(std::sqrt((a+top)/2), std::sqrt((-a+top)/2));
}
double ComplexNumber::mag()
{
	std::cout << std::sqrt((re*re) + (im*im)) << std::endl;
}
bool ComplexNumber::equals(const ComplexNumber &rhs)
{
	if (this->re == rhs.re && this->im == rhs.im) {std::cout << std::boolalpha << true << std::endl;}
	else std::cout << std::boolalpha << false << std::endl;
}