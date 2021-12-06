#pragma once

#include "Scalar.h"
#include <iostream>
#include <compare>

using namespace std;

class Energy : public Scalar
{
	const string lit = "J";
public:
	Energy(double value = 0) : Scalar(value) {}

	Energy& operator+=(const Energy& _value);
	Energy operator+(const Energy& obj) const;

	Energy& operator-=(const Energy& _value);
	Energy operator-(const Energy& obj) const;
	
};

Energy operator "" J(long double _value);