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

	Scalar& operator=(const Scalar& obj);
	Scalar& operator=(double _value);

	Scalar operator+=(const Scalar& _value);
	Scalar operator+(const Scalar& obj) const;

	Scalar operator-=(const Scalar& _value);
	Scalar operator-(const Scalar& obj) const;

	partial_ordering operator<=> (const Scalar& obj) const;

	double get_value() const;
};
