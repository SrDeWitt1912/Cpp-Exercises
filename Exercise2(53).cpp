#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
	string message("\Learn from your mistakes!");
	cout << message << endl;

	int len = message.length();
	cout << "Length of the string: " << len << endl;

	int a, b;
	a = 12.5;
	srand(a);
	b = rand();
	cout << "\nRandom number: " << b << endl;

	return 0;
}