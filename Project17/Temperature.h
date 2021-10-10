#pragma once

#include "Scalar.h"

#include <iostream>
#include <compare>

using namespace std;

class Temperature : public Scalar
{
public:
	Temperature(double value = 0) : Scalar(value) {}
};

Temperature operator "" K(long double _value);
ostream& operator << (ostream& out, const Temperature& obj);
istream& operator >> (istream& in, Temperature& obj);
