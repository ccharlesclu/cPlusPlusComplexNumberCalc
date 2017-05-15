#pragma once

#include <iostream>
#include <cmath>

using namespace std;

class ComplexNumber
{
public:
	// --constructors
	ComplexNumber();
	ComplexNumber(double r, double i);
	ComplexNumber(const ComplexNumber &cn);
	
	// --destructor
	~ComplexNumber();
	
	// --mutators
	void setR(double r);
	void setI(double i);
	
	// --accessors
	double getR();
	double getI();
	
	// --message handlers
	void print();
	ComplexNumber add(const ComplexNumber &rhs);
	ComplexNumber sub(const ComplexNumber &rhs);
	ComplexNumber mult(const ComplexNumber &rhs);
	ComplexNumber div(const ComplexNumber &rhs);
	ComplexNumber conj();
	ComplexNumber sqrt();
	double mag();
	bool equals(const ComplexNumber &rhs);

public:
	double re, im;
};