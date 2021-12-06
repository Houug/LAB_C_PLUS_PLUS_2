#include "WaveLength.h"
#include <iostream>
#include <compare>

using namespace std;

// определения пользовательского литерала
WaveLength operator "" m(long double _value)
{
	return WaveLength(_value);
}

ostream& operator << (ostream& out, const WaveLength& obj)
{
	return out << obj.get_value() << "m";
}

WaveLength::operator Frequency()
{
	return Frequency(pow(299792458, 2) / this->get_value());
}

istream& operator >> (istream& input, WaveLength& obj)
{
	double value_;
	input >> value_;
	obj.set_value(value_);
	return input;
}