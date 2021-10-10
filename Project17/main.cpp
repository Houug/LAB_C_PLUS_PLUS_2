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

using namespace std;

void writing_DB_to_file(Mass obj) {
	fstream f_out;
	f_out.open("BD.txt", ios::out);
	f_out << obj;
	f_out.close();
}

void reading_from_DB_file(Mass& obj) {
	fstream f_in;
	f_in.open("BD.txt", ios::in);
	f_in >> obj;
	f_in.close();
}

int main()
{
	Scalar a;
	Scalar b;
	cin >> a;
	cin >> b;
	cout << typeid(a + b).name();
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