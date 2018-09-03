//include the library
#include <iostream>

//use the standard library
using namespace std;

//write the main function
int main(){

//introduction
	cout << "To check that if a number is positive, negative or zero..." << endl;

	cout << "=============================================================" << endl;

//declare a variable a	
		int a;

//ask to type the number to be checked
		cout << "Type the number..." << endl;

//input it
		cin >> a;

//start the conditional statement
		if (a < 0) {

			cout << "This is negative..." << endl;}

		else if (a > 0) {

		cout << "This is positive..." << endl;}

		else cout << "It's ZERO..." << endl;

//end
		return 0;
}	
