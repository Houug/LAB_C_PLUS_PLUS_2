#include <iostream>
#include <compare>

#include "Mass.h"
#include "Energy.h"
#include "WaveLength.h"
#include "Frequency.h"
#include "Temperature.h"
#include "Power.h"

using namespace std;


int main()
{
	Mass w(2.5);
	cout << "Mass: " << w << endl;
	Mass w1 = w;
	// <=> test
	if (w1 <= w) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	cout << endl;
	// e= mc^2 test
	Mass test_mas = 0.0001;
	cout << (Energy)test_mas;
	Energy e(2.5);
	cout << "Energy: " << e << endl;
	WaveLength wl(2.5);
	cout << "Wave Length: " << wl << endl;
	Frequency f(2.5);
	cout << "Frequency: " << f << endl;
	Temperature t(2.5);
	cout << "Temperature: " << t << endl;
	Power p(2.5);
	cout << "Power: " << p << endl;


	return 0;
}