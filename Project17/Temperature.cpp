#include "Temperature.h"

#include <iostream>
#include <compare>

using namespace std;

// определения пользовательского литерала
Temperature operator "" K(long double _value)
{
	return Temperature(_value);
}

ostream& operator << (ostream& out, const Temperature& obj)
{
	return out << obj.get_value() << "K";
}

istream& operator >> (istream& input, Temperature& obj)
{
	double value_;
	input >> value_;
	obj.set_value(value_);
	return input;
}