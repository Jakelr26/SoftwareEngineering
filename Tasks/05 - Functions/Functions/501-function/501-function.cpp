#include <iostream>
using namespace std;

int L;		//This is not an ideal location - we will soon address this

void displayBanner()
{
	for (unsigned int n = 0; n < ((L/2) + 2); n++) {
		cout << "*-";
	}
	cout << endl;
}

int main()
{
	const string message = "Welcome to Computer Science";
	
	//Get the length of the string
	L = message.length();

	displayBanner();

	cout << "* ";				//Leading *
	cout << message;			//Message
	cout << " *" << endl;		//Trailing *

	displayBanner();

	//Tell the calling shell all is well
	return 0;
}