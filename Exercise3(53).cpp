#include <iostream>
#include <string>

using namespace std;

int main() {
	string message("I have learned something new again!");
	cout << message << endl << "The length of the message is: " << message.length() << endl;

	string input1, input2, conca;
	getline(cin, input1);
	getline(cin, input2);
	conca = input1 + input2;

	cout << conca << endl;
}