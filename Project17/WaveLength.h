#pragma once

#include "Scalar.h"
#include "Frequency.h"
#include <iostream>
#include <compare>

using namespace std;

class WaveLength : public Scalar
{
	const string lit = "m";
public:
	WaveLength(double value = 0) : Scalar(value) {}
	WaveLength(const Frequency& obj) : Scalar(pow(299792458, 2) / get_value()) {}
	operator Frequency();
};

WaveLength operator "" m(long double _value);