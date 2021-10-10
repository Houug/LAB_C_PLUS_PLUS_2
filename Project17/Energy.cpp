#include "Energy.h"
#include <iostream>
#include <compare>

using namespace std;

// определения пользовательского литерала
Energy operator "" J(long double _value)
{
	return Energy(_value);
}

ostream& operator << (ostream& out, const Energy& obj)
{
	return out << obj.get_value() << "J";
}

istream& operator >> (istream& input, Energy& obj)
{
	double value_;
	input >> value_;
	obj.set_value(value_);
	return input;
}

Energy& Energy::operator+=(const Energy& obj)
{
	this->value += obj.value;
	return *this;
}

// оператор сложения
Energy Energy::operator+(const Energy& obj) const
{
	return Energy(*this) += obj;
}

Energy& Energy::operator-=(const Energy& obj)
{
	this->value -= obj.value;
	return *this;
}

// оператор вычитания
Energy Energy::operator-(const Energy& obj) const
{
	return Energy(*this) -= obj;
}