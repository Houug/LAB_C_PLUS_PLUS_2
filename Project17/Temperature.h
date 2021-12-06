#pragma once

#include "Scalar.h"

#include <iostream>
#include <compare>

using namespace std;

class Temperature : public Scalar
{
	const string lit = "K";
public:
	Temperature(double value = 0) : Scalar(value) {}
};

Temperature operator "" K(long double _value);
