//include the library
#include <iostream>

//use standard name space
using namespace std;

//write the main function
int main(){

//declare the variables	
		float b, h, A, B;

		cout << "To find the area of a triangle when the base and height of the triangle is given..." << endl;

		cout << "************************************************************************************" << endl;

//mention the tasks to be done
		cout << "Enter the length of the base of the triangle in meter..." << endl;

//input the value
		cin >> b;

//mention the tasks to be done
		cout << "Enter the length of the height of the triangle in meter..." << endl;

//input the value
		cin >> h;

//write the maths to be done for output
		B = b * h;

		A = B/2;

//write the output to be displayed
		cout << "The area of the triangle is: " << A << endl;

		return 0;
//end
}
