#include "Mass.h"
#include <iostream>
#include <compare>

using namespace std;

// определения пользовательского литерала
Mass operator "" kg(long double _value)
{
	return Mass(_value);
}

Mass::operator Energy()
{
	return Energy(this->get_value() * pow(299792458, 2));
}

Mass& Mass::operator+=(const Mass& obj)
{
	auto temp = get_value();
	temp += obj.get_value();
	set_value(temp);
	return *this;
}

Mass Mass::operator+(const Mass& obj) const
{
	return Mass(*this) += obj;
}


ostream& operator << (ostream& out, const Mass& obj)
{
	return out << obj.get_value() << "kg";
}

istream& operator >> (istream& input, Mass& obj)
{
	double value_;
	input >> value_;
	obj.set_value(value_);
	return input;
}