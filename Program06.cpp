//Outputs three random numbers

#include <iostream>			// Declaration of cin and cout prototypes of srand(), rand():
#include <cstdlib>			// void srand(unsigned int seed); int rand(void)

using namespace std;

int main() {

	unsigned int seed;
	int z1, z2, z3;

	cout << "	--- Random Numbers ---	\n" << endl;
	cout << "To initialize the random number generator, "
		<< "\n Please enter an integer value: ";
	cin >> seed;	// Input an integer

	srand(seed);	//and use it as argument for a sequence of random numbers

	z1 = rand();	//compute three random numbers
	z2 = rand();
	z3 = rand();

	cout << "\nThree random numbers: "
		<< z1 << "	" << z2 << "	" << z3 << endl;


	return 0;
}