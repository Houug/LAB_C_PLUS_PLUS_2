#pragma once

#include "Scalar.h"
#include <iostream>
#include <compare>

using namespace std;

class Energy : public Scalar
{
public:
	Energy(double value = 0) : Scalar(value) {}

	Energy& operator+=(const Energy& _value);
	Energy operator+(const Energy& obj) const;

	Energy& operator-=(const Energy& _value);
	Energy operator-(const Energy& obj) const;
};

Energy operator "" J(long double _value);
ostream& operator << (ostream& out, const Energy& obj);
istream& operator >> (istream& in, Energy& obj);