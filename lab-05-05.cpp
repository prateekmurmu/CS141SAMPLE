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

			cout << "The number is divisible by 2..." << endl;}

		else cout << "The number is not divisible by 2..." << endl;

//end
		return 0;

}
