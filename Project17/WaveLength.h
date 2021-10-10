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
	WaveLength(const Frequency& obj) : Scalar(pow(299792458, 2) / value) {}
	operator Frequency();
};

WaveLength operator "" m(long double _value);
ostream& operator << (ostream& out, const WaveLength& obj);
istream& operator >> (istream& in, WaveLength& obj);