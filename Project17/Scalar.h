#pragma once

#include <iostream>
#include <compare>

using namespace std;

class Scalar
{
protected:
	double value;
	void _init(double _value);
public:

	Scalar(double value = 0);

	Scalar(const Scalar& obj);

	virtual ~Scalar();
	void f();

	Scalar& operator=(const Scalar& obj);
	Scalar& operator=(double _value);

	virtual Scalar& operator+=(const Scalar& _value);
	virtual Scalar operator+(const Scalar& obj) const;

	virtual Scalar& operator-=(const Scalar& _value);
	virtual Scalar operator-(const Scalar& obj) const;
	partial_ordering operator<=> (const Scalar& obj) const;

	double get_value() const;
	void set_value(double _value);
	friend ostream& operator << (ostream& out, const Scalar& obj);
};
ostream& operator << (ostream& out, const Scalar& obj);

