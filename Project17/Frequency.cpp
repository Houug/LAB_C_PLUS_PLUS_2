#include "Frequency.h"

#include <iostream>
#include <compare>

using namespace std;

// определения пользовательского литерала
Frequency operator "" Hz(long double _value)
{
	return Frequency(_value);
}

Frequency::operator Energy()
{
	return Energy(this->get_value() * 6.62607015 * pow(10, -34));
}

ostream& operator << (ostream& out, const Frequency& obj)
{
	return out << obj.get_value() << "Hz";
}

istream& operator >> (istream& input, Frequency& obj)
{
	double value_;
	input >> value_;
	obj.set_value(value_);
	return input;
}