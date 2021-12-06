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
	Mass(double value = 0) : Scalar(value, "kg") {}
	Mass(const Energy& obj) : Scalar(obj.get_value() / pow(299792458, 2), "kg") {}
	operator Energy();
	Mass& operator+=(const Mass& obj);
	Mass operator+(const Mass& obj) const;
};


Mass operator "" kg(long double _value);