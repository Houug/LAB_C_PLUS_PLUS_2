#include <iostream>
#include <compare>
#include <fstream>
#include <string>
#include "Mass.h"
#include "Energy.h"
#include "WaveLength.h"
#include "Frequency.h"
#include "Temperature.h"
#include "Power.h"
#include <typeinfo>
#include <regex>
#include <functional>
#include <typeinfo>


using namespace std;
using namespace placeholders;

Scalar foo(Scalar build(double, const string)) {
	cout << "Input format is xx.xx(literal) + (or -) xx.xx(literal)" << endl;
	cout << "Literals: kg, J, K, Hz, W, m" << endl;
	string str;
	cin >> str;

	if (regex_match(str, regex("\\d+\\.\\d+(kg|J|m|Hz|K|W)[+-]\\d+\\.\\d+(kg|J|m|Hz|K|W)"))) {
		regex lit("(kg|J|m|Hz|K|W)");
		sregex_token_iterator iter_lit(str.begin(), str.end(), lit);
		sregex_token_iterator end;

		string first_lit = iter_lit->str();
		string second_lit = (++iter_lit)->str();

		smatch sm;
		regex_search(str, sm, regex("\\d+\\.\\d+(kg|J|m|Hz|K|W)"));

		regex dig("\\d+\\.\\d+");
		sregex_token_iterator iter_dig(str.begin(), str.end(), dig);

		double first_dig = stod(iter_dig->str());
		double second_dig = stod((++iter_dig)->str());

		if (first_lit != second_lit) {
			throw exception("Incorrect literal");
		}


		// lambda
		auto calculate = [&sm, &build](double val1, const string lit1, double val2, const string lit2) {
			auto res = ((sm.suffix().str()[0] == '+') ? build(val1, lit1) + build(val2, lit2) : build(val1, lit1) - build(val2, lit2));
			return res; };

		// lambda
		function<Scalar(double, const string, double, const string)> result = bind(calculate, _1, _2, _3, _4);
		
		return result(first_dig, first_lit, second_dig, second_lit);
	}
	else
	{
		throw exception("Incorrect input value");
	}
}

int main()
{
	// lambda
	auto build = [](double value, const string liter) -> Scalar {
		if (liter == "kg")
		{
			return Mass(value);
		}
		else if (liter == "J")
		{
			return Energy(value);
		}
		else if (liter == "Hz")
		{
			return Frequency(value);
		}
		else if (liter == "m")
		{
			return WaveLength(value);
		}
		else if (liter == "K")
		{
			return Temperature(value);
		}
		else if (liter == "W")
		{
			return Power(value);
		}
		else {
			throw exception("Incorrect literal");
		}
	};

	while (true) {
		try {
			// lambda
			cout << foo(build) << endl;
		}
		catch (exception e) {
			cout << "[Error] " << e.what() << endl << endl;
		}
	}

	//auto a = string().;


	//smatch res;
	//std::string s = "1.0kg+13.0J";

	//std::regex ololo("[A-z]{1,2}");
	//std::sregex_token_iterator iter(s.begin(), s.end(), ololo);
	//std::sregex_token_iterator end;

	//for (; iter != end; ++iter) {
	//	std::cout << iter->str() << '\n';
	//}
	//regex reg("\\d+\\.\\d+");
	//std::sregex_token_iterator iter1(s.begin(), s.end(), reg);
	//std::sregex_token_iterator end1;

	//for (; iter1 != end1; ++iter1) {
	//	std::cout << iter1->str() << '\n';
	//}

	//smatch sm;
	//regex_search(s, sm, regex("\\d+\\.\\d+[A-z]{1,2}"));
	//cout << sm.suffix().str()[0];




	//Mass test;
	//reading_from_DB_file(test);
	//cout << 10.0J + 28.0kg;

	////exception
	//bool flag = false;
	//while (not flag) {
	//	try {
	//		cout << "Enter the mass value:";
	//		cin >> test;
	//		if (!cin.fail()) {
	//			cout << "Write number: " << test << endl;
	//			flag = true;
	//			break;
	//		}
	//		else {
	//			throw exception("Invalid input of argument a. Write int or double number.\n");
	//		}
	//	}
	//	catch (exception e) {
	//		cout << e.what();
	//		cin.clear();
	//		cin.ignore(cin.rdbuf()->in_avail());
	//	};
	//}

	////writing_DB_to_file(test);

	//Mass w(2.5);
	//cout << "Mass: " << w << endl;
	//Mass w1 = w;
	//Mass& m2 = w1;
	//std::cout << sizeof(m2)<<'\n';
	//Scalar s;
	//std::cout << sizeof(s);
	//Mass m3(3.5);

	//// <=> test
	//if (w1 <= w) {
	//	cout << "YES";
	//}
	//else {
	//	cout << "NO";
	//}
	//cout << endl;

	//// e= mc^2 test
	//Mass test_mas = 0.0001;
	//cout << "Convert mass to energy:" << (Energy) test_mas << endl;
	//Energy e(2.5);
	//cout << "Energy: " << (Mass) e << endl;
	//WaveLength wl(2.5);
	//cout << "Wave Length: " << wl << endl;
	//Frequency f(2.5);
	//cout << "Frequency: " << f << endl;
	//Temperature t(2.5);
	//cout << "Temperature: " << t << endl;
	//Power p(2.5);
	//cout << "Power: " << p << endl;


	return 0;
}