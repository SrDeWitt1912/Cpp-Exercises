#include <iostream>
using namespace std;

int main() {

	int s_int = sizeof(int);
	float s_float = sizeof(float);
	double s_double = sizeof(double);
	long s_long = sizeof(long);

	cout << "The size of int is: " << s_int << "Bytes" << endl;
	cout << "The size of long is: " << s_long << "Bytes" << endl;
	cout << "The size of float is: " << s_float << "Bytes" << endl;
	cout << "The size of double is: " << s_double << "Bytes" << endl;
}