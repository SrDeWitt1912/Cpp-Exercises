#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	string label;
	double price;

	cout << "\nPlease enter an article label: ";

	cin >> setw(16);			//cin.width(8)   Max characters
	cin >> label;

	cin.sync();					//This two methods mean wait for the label before entering to request the price
	cin.clear();

	cout << "\nEnter the price of the article: ";
	cin >> price;

	cout << fixed << setprecision(2)
		<< "\nArticle:"
		<< "\n Label:\t" << label
		<< "\n Price:\t" << price << endl;

	return 0;
}