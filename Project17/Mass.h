#pragma once

#include "Scalar.h"
#include "Energy.h"
#include <iostream>
#include <compare>
#include <cmath>
#include <string>

using namespace std;

class Mass : public Scalar
{
private:
	std::string s;
public:
	Mass(double value = 0) : Scalar(value) {}
	operator Energy();
private:
	void f(int);

};


Mass operator "" kg(long double _value);
ostream& operator << (ostream& out, const Mass& obj);
istream& operator >> (istream& in, Mass& obj);