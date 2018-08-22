//include the library
#include <iostream>

//use standard name space
using namespace std;

//write the main function
int main(){

//declare the variables		
		float A, B, C;

		cout << "To find the third angle of a triangle when two angles are given..." << endl;

		cout << "===================================================================" << endl;

//mention the tasks to be done
		cout << "Enter the first angle of the triangle in degree." << endl;

//input the value
		cin >> A;

//mention the tasks to be done
		cout << "Enter the second angle of the triangle in degree." << endl;

//input the value
		cin >> B;

//write the maths to be done for output
		C = 180 - (A + B);

//write the output to be displayed
		cout << "The third angle of the triangle in degree is: " << C << endl;

		return 0;
//end
}
