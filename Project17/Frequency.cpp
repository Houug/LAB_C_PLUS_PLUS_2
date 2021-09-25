#include "Frequency.h"

#include <iostream>
#include <compare>

using namespace std;

// определения пользовательского литерала
Frequency operator "" Hz(long double _value)
{
	return Frequency(_value);
}

ostream& operator << (ostream& out, const Frequency& obj)
{
	return out << obj.get_value() << "Hz";
}

Frequency::operator Energy()
{
	return Energy(this->value * 6.62607015 * pow(10, -34));
}