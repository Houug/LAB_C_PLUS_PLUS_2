#pragma once

#include "Scalar.h"
#include "Energy.h"
#include <iostream>
#include <compare>

using namespace std;

class Frequency : public Scalar
{
public:
	Frequency(double value = 0) : Scalar(value) {}
	operator Energy(){}
};

Frequency operator "" Hz(long double _value);
ostream& operator << (ostream& out, const Frequency& obj);