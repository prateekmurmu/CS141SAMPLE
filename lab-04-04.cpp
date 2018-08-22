//include the library
#include <iostream>

//use standard name space
using namespace std;

//write the main function
int main(){
//declare the variables
		float d, w, y;		
//mention the tasks to be done		
		cout << "Conversion of Days into Weeks and Years" << endl;
		cout << "========================================" << endl;
		cout << "Input the no. day(s) to be converted to week(s) and year(s)..." << endl;
//input the value
		cin >> d;
//write the maths for the conversion
		w = (d/7);
		y = (d/365);
//write the output to be displayed
		cout << "The no. of day(s) in week(s) is: " << w << endl;
		cout << "The no. of day(s) in year(s) is: " << y << endl;
		return 0;
//end
}
