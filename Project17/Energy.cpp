#include "Energy.h"

#include <iostream>
#include <compare>

using namespace std;

// ����������� ����������������� ��������
Energy operator "" J(long double _value)
{
	return Energy(_value);
}

ostream& operator << (ostream& out, const Energy& obj)
{
	return out << obj.get_value() << "J";
}