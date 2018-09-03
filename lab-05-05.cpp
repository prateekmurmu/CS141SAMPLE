//include the library
#include <iostream>

//use standard namespace
using namespace std;

//write the main function
int main () {

//declare a variable x
		int x;

//introduction
		cout << "To check that a number is even or odd." << endl;

		cout << "--------------------------------------" << endl;

//ask to type the number to be checked
		cout << "Type the number to be checked..." << endl;

//input it
		cin >> x;

//start the conditional statement
		if (x % 2 == 0) { 

			cout << "The number is even..." << endl;}

		else cout << "The number is odd..." << endl;

//end
		return 0;

}
