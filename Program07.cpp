// To use strings

#include <iostream>
#include <string>

using namespace std;

int main() {

	//Defines four strings:
	string prompt("What is your name:	"),
		name,					// An empty											How does it work?
		line(40, '-'),			// string with 40 '-'						This includes the base header iostream and adds the string one
		total = "Hello ";		// is possible!								this is meant to add some functions like getline()
								//											in the main func we have the next thing, adds a serie of strings
	cout << prompt;				//Request for input.						the first one is prompt() and in its interior it saves a string for
	getline(cin, name);			//Input a name in one line					request the user something, in this case, its name, adds two more strings,
								//											and start with the couts, first request a name with the getline()
	total = total + name;		//Concatenates and assigns strings			and then, add a string to another one, prints everything and takes
								//											the string.length() for know how long in chars it is
	cout << line << endl		// Outputs line and name
		<< total << endl;
	cout << " Your name is "	// Outputs length
		<< name.length() << "characters long!" << endl;
	cout << line << endl;

	return 0;
}