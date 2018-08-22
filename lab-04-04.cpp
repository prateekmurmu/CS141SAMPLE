//include the library
#include <iostream>
#include <cmath>

//use standard name space
using namespace std;

//write the main function
int main(){
//declare the variables
		int d, w, y;		
//mention the tasks to be done		
		cout << "Conversion of Days into Weeks and Years" << endl;
		cout << "========================================" << endl;
		cout << "Input the no. day(s) to be converted to week(s) and year(s)..." << endl;
//input the value
		cin >> d;
//write the maths for the conversion
		y = (d/365);
		d = d%365;
		w = d/7;
		d = d%7;
//write the output to be displayed
		cout << y << "Years, " << w << "Weeks, " << d << "Days" << endl;
		return 0;
//end
}
