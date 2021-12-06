#pragma once

#include "Scalar.h"
#include "Energy.h"
#include <iostream>
#include <compare>

using namespace std;

class Frequency : public Scalar
{
	const string lit = "Hz";
public:
	Frequency(double value = 0) : Scalar(value) {}
	Frequency(const Energy& obj) : Scalar(get_value() / (6.62607015 * pow(10, -34))) {}
	operator Energy();
};

Frequency operator "" Hz(long double _value);