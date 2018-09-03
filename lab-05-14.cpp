//include library
#include <iostream>

//use standard namespace
using namespace std;

//write the main function
int main() {

//declare variables
int a, b, c;

cout << "To check that the triangle specified by tou through mentioning it's three angles is valid or not..." << endl;

cout << "====================================================================================" << endl;

//ask to enter the first angle
cout << "Enter the first angle of the triangle to check the validity..." << endl;

//input it
cin >> a;

//ask to enter the second andle
cout << "Enter the second one..." << endl;

//input it
cin >> b;

//ask to input the third angle
cout << "Enter the third one..." << endl;

//input it
cin >> c;

//start conditional statements
if ((a + b + c) == 180) {

cout << "The triangle specified by you is valid" << endl;

}

else cout << "The triangle specified by you is not valid" << endl;

//end
return 0;

}
