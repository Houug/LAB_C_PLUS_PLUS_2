#pragma once

#include "Scalar.h"

#include <iostream>
#include <compare>

using namespace std;

class Power : public Scalar
{
	const string lit = "W";
public:
	Power(double value = 0) : Scalar(value) {}
};

Power operator "" W(long double _value);
