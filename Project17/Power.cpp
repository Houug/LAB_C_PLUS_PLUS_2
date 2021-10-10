#include "Power.h"

#include <iostream>
#include <compare>

using namespace std;

// определения пользовательского литерала
Power operator "" W(long double _value)
{
	return Power(_value);
}

ostream& operator << (ostream& out, const Power& obj)
{
	return out << obj.get_value() << "W";
}

istream& operator >> (istream& input, Power& obj)
{
	double value_;
	input >> value_;
	obj.set_value(value_);
	return input;
}