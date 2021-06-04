#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	string articleNumber, quantity, unit;
	cout << "Write the article number: ";
	getline(cin, articleNumber);

	cin.sync();
	cin.clear();

	cout << "Write the quantity: ";
	getline(cin, quantity);

	cin.sync();
	cin.clear();

	cout << "Write the unit price: ";
	getline(cin, unit);

	cin.sync();
	cin.clear();

	cout << "Article number: " << articleNumber << endl
		<< "\tQuantity: " << quantity << endl
		<< "\tUnit price: " << unit << endl;

	return 0;
}