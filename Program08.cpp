#include <iostream>

using namespace std;

int main() {
	int number;
	cout << "Please enter an integer: ";
	cin >> number;
	cout << uppercase
		<< " octal	\t decimal	\t hexadecimal\n "
		<< oct << number << "	\t "
		<< dec << number << "	\t "
		<< hex << number << "	\t " << endl;

	return 0;
}