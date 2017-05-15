#include <iostream>
#include <cmath>

#include "ComplexNumber.h"
#include "PolarNumber.h"

using namespace std;

PolarNumber::PolarNumber() : ComplexNumber()
{
}

PolarNumber::PolarNumber(double r, double i) : ComplexNumber()
{
	this->re = r;
	this->im = i;
}

PolarNumber::PolarNumber(const PolarNumber &cn) : ComplexNumber()
{
	this->re = cn.re;
	this->im = cn.im;
}

PolarNumber::PolarNumber(const ComplexNumber &cn) : ComplexNumber()
{
	this->re = cn.re;
	this->im = cn.im;
}

PolarNumber::~PolarNumber()
{
}

double PolarNumber::getRadius() const
{
	return std::sqrt((re*re) + (im*im));
}

double PolarNumber::getTheta() const
{
	return std::atan2(im, re);
}

PolarNumber PolarNumber::mult(const PolarNumber &rhs)
{
	double r1 = this->getRadius(), t1 = this->getTheta(), r2 = rhs.getRadius(), t2 = rhs.getTheta();
	double r = r1*r2;
	double t = t1*t2;
	return PolarNumber(r, t);
}

PolarNumber PolarNumber::div(const PolarNumber &rhs)
{
	double r1 = this->getRadius(), t1 = this->getTheta(), r2 = rhs.getRadius(), t2 = rhs.getTheta();
	double r = r1/r2;
	double t = t1 - t2;
	if (std::fabs(r2) < .00001) return PolarNumber(0,0);
	return PolarNumber(r, t);
}

void PolarNumber::print()
{
	double r = this->getRadius();
	double t = this->getTheta();
	std::cout << r << "(cos(" << t << ") + isin(" << t << "))" << std::endl;
}

bool PolarNumber::equals(const PolarNumber &rhs){
	double r1 = this->re, r2 = rhs.re;
	double t1 = this->im, t2 = rhs.im;
	if ((std::fabs(r1-r2) < .000001) && (std::fabs(t1-t2) < .000001)) {std::cout << std::boolalpha << true << std::endl;}
	else std::cout << std::boolalpha << false << std::endl;
}