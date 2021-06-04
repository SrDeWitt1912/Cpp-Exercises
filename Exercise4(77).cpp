#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	char ch;
	int code;

	cout << "Write a character: ";
	cin >> setw(1) >> ch;

	cin.sync();
	cin.clear();

	code = ch;

	cout << "Your character was: " << ch << endl
		<< "\tThe decimal code for your character is: " << dec << code << endl
		<< "\tThe octal code for your character is: " << oct << code << endl
		<< "\tThe hexadecimal code for your character is: " << hex << code << endl;

	return 0;
}