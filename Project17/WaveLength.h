#pragma once

#include "Scalar.h"
#include "Frequency.h"
#include <iostream>
#include <compare>

using namespace std;

class WaveLength : public Scalar
{
public:
	WaveLength(double value = 0) : Scalar(value) {}
	operator Frequency() {};
};

WaveLength operator "" m(long double _value);
ostream& operator << (ostream& out, const WaveLength& obj);