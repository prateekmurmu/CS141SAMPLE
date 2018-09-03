//include library
#include <iostream>
//use standard namespace
using namespace std;

//write the main function
int main () {

//declare the variables
		int n;

		cout << "To list the natural number till 'n'..." << endl;

		cout << "______________________________________" << endl;

//ask to type the number to which the list of natural numbers from 1 to be shown
		cout << "Type the natural number 'n' to which you want to see the list of natural numbers..." << endl;

//input it
		cin >> n;
//declare another variable c as 1
		int c = 1;

		cout << "The list of natural numbers you want to see till " << n << " is:" << endl;

//write the output to show 1
		cout << "1" << endl;

//start the while statement
	while (c < n) {

		c++;		

		cout << c << endl;

}

//end
return 0;

}
