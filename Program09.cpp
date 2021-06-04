#include <iostream>
using namespace std;
int main() {
	double x = 12.0;
	cout.precision(2);

	cout << " By default:\t" << x << endl;
	cout << " Showpoint:\t" << showpoint << x << endl;
	cout << " Fixed:\t" << fixed << x << endl;
	cout << " Scientific;\t" << scientific << x << endl;

	return 0;
}