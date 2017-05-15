#pragma once

#include <iostream>
#include <cmath>

#include "ComplexNumber.h"

using namespace std;

class PolarNumber : public ComplexNumber
{
public:
	// --constructors
	PolarNumber();
	PolarNumber(double r, double i);
	PolarNumber(const PolarNumber &cn);
	PolarNumber(const ComplexNumber &cn);
	
	~PolarNumber();
	
	double getRadius() const;
	double getTheta() const;
	
	void print();
	PolarNumber mult(const PolarNumber &rhs);
	PolarNumber div(const PolarNumber &rhs);
	
	bool equals(const PolarNumber &rhs);

};