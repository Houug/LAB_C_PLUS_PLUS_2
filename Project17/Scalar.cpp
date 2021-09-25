#include "Scalar.h"

using namespace std;

void Scalar::_init(double _value) 
{
	value = _value;
}

// конструктор
Scalar::Scalar(double _value) : value(_value)
{
}

// конструктор копирования
Scalar::Scalar(const Scalar& obj) : value(obj.value)
{
}

// деструктор
Scalar::~Scalar()
{
}

// оператор присваивания
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

// оператор сложения
Scalar Scalar::operator+(const Scalar& obj) const
{
	return Scalar(*this) += obj;
}

Scalar Scalar::operator-=(const Scalar& obj)
{
	this->value -= obj.value;
	return *this;
}

// оператор вычитания
Scalar Scalar::operator-(const Scalar& obj) const
{
	return Scalar(*this) -= obj;
}

// геттер
double Scalar::get_value() const {
	return value;
}

// оператор трехстороннего сравнения
partial_ordering Scalar::operator<=> (const Scalar& obj) const
{
	return value <=> obj.value;
}
