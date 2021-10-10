#pragma once

#include "Scalar.h"

#include <iostream>
#include <compare>

using namespace std;

class Power : public Scalar
{
public:
	Power(double value = 0) : Scalar(value) {}
};

Power operator "" W(long double _value);
ostream& operator << (ostream& out, const Power& obj);
istream& operator >> (istream& in, Power& obj);
