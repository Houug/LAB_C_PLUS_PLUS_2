#pragma once

#include "Scalar.h"
#include "Energy.h"
#include <iostream>
#include <compare>
#include <cmath>

using namespace std;

class Mass : public Scalar
{
public:
	Mass(double value = 0) : Scalar(value) {}

	operator Energy() {}
};


Mass operator "" kg(long double _value);
ostream& operator << (ostream& out, const Mass& obj);
