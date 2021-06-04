#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	double a = 0.123456;
	double b = 23.987;
	double c = -123.456;

	cout << setw(15) << left << a << endl;
	cout << setw(12) << right << setprecision(2) << fixed << b << endl;
	cout << setw(10) << setprecision(4) << scientific << c << endl;
}