#pragma once
#include <string>
#include <iostream>
#include <compare>

using namespace std;

class Scalar
{
private:
	double value;
	void _init(double _value);
	const string lit;

public:
	
	Scalar(double value = 0, string _lit = "");

	Scalar(const Scalar& obj);

	virtual ~Scalar();
	void f();

	Scalar& operator=(const Scalar& obj);
	Scalar& operator=(double _value);

	virtual Scalar& operator+=(const Scalar& obj);
	virtual Scalar operator+(const Scalar& obj) const;

	virtual Scalar& operator-=(const Scalar& _value);
	virtual Scalar operator-(const Scalar& obj) const;
	partial_ordering operator<=> (const Scalar& obj) const;

	double get_value() const;
	void set_value(double _value);
	friend ostream& operator << (ostream& out, const Scalar& obj);
	friend istream& operator >> (istream& in, Scalar& obj);
};
