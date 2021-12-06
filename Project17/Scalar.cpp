#include "Scalar.h"

using namespace std;

void Scalar::_init(double _value) 
{
	value = _value;
}

// конструктор
Scalar::Scalar(double _value, string _lit) : value(_value), lit(_lit)
{
}


// конструктор копирования
Scalar::Scalar(const Scalar& obj) : value(obj.value), lit(obj.lit)
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
void Scalar::f() {
	cout << "I'm from scalar";
}

Scalar& Scalar::operator+=(const Scalar& obj)
{
	this->value += obj.value;
	return *this;
}

// оператор сложения
Scalar Scalar::operator+(const Scalar& obj) const
{
	return Scalar(*this) += obj;
}

Scalar& Scalar::operator-=(const Scalar& obj)
{
	this->value -= obj.value;
	return *this;
}

// оператор вычитания
Scalar Scalar::operator-(const Scalar& obj) const
{
	return Scalar(*this) -= obj;
}

partial_ordering Scalar::operator<=>(const Scalar& obj) const
{
	return value <=> obj.value;
}

// геттер
double Scalar::get_value() const {
	return value;
}

void Scalar::set_value(double _value){
	value = _value;
}

ostream& operator << (ostream& out, const Scalar& obj) {
	return out << obj.get_value() << obj.lit;
}

istream& operator>>(istream& in, Scalar& obj)
{
	return in;
}
