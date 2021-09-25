#include "Scalar.h"

using namespace std;

void Scalar::_init(double _value) 
{
	value = _value;
}

// �����������
Scalar::Scalar(double _value) : value(_value)
{
}

// ����������� �����������
Scalar::Scalar(const Scalar& obj) : value(obj.value)
{
}

// ����������
Scalar::~Scalar()
{
}

// �������� ������������
Scalar& Scalar::operator=(const Scalar& _value)
{
	_init(_value.value);
	return *this;
}

Scalar& Scalar::operator=(double _value)
{
	_init(value);
	return *this;
}

Scalar Scalar::operator+=(const Scalar& obj)
{
	this->value += obj.value;
	return *this;
}

// �������� ��������
Scalar Scalar::operator+(const Scalar& obj) const
{
	return Scalar(*this) += obj;
}

Scalar Scalar::operator-=(const Scalar& obj)
{
	this->value -= obj.value;
	return *this;
}

// �������� ���������
Scalar Scalar::operator-(const Scalar& obj) const
{
	return Scalar(*this) -= obj;
}

// ������
double Scalar::get_value() const {
	return value;
}

// �������� �������������� ���������
partial_ordering Scalar::operator<=> (const Scalar& obj) const
{
	return value <=> obj.value;
}
