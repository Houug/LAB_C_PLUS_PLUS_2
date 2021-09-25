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