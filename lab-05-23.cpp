//include the library
#include <iostream>

//use standard namespace
using namespace std;

//write the main function
int main () {

//declare the variable
		int n;

	cout << "To show the list of natural numbers from 'n' to 1..." << endl;

	cout << "-------------------------------------------------------------" << endl;

//ask to specify the number from which the natural numbers is to be listed till 1
	cout << "Specify the natural number 'n' from which you want to see the list of natural numbers till 1..." << endl;

	cin >> n;

//declare another variable c as n
		int c = n;

		cout << "The list of natural numbers from " << n << " till 1 is" << endl;

		cout << n << endl;

//start the while statement
	while (c > 1) {

		c--;

		cout << c << endl;

}

//end
return 0;

}
