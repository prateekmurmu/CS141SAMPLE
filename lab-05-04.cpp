//include the library
#include <iostream>

//use the standard namespace
using namespace std;

//start the main function
int main() {

//introduction
		cout << "To check that a number is divisible by 5 and 11 or not..." << endl;

	cout << "---------------------------------------------------------------------" << endl;

//declare a variable a
		int a;

// ask to type the number to be checked
		cout << "Type the number..." << endl;

//input it
		cin >> a;

//start the conditional statement		
		if (a % 55 == 0) {

			cout << "It is divisible by 5 and 11..." << endl;}

		else cout << "It's not divisible by 5 and 11..." << endl;

//end
		return 0;
}
