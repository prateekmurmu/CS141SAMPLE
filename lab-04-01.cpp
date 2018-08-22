//include the library
#include <iostream>

//use standard name space
using namespace std;

//write the main function
int main(){
//declare the variables
		float cm, m, km;
//mention the tasks to be done
		cout << "#Conversion of centimeter to meter and kilometer: " << endl;
		cout << "=================================================" << endl;
		cout << "Write the length to be converted (in centimeter)..." << endl;
//input the value
		cin >> cm;
//write the maths for the conversion
		m = (cm/100);
		km = (cm/10000);
//write the out put to be displayed
		cout << "The distance (in centimeter) in meter is " << m << endl;
		cout << "The distance (in centimeter) in km is " << km << endl;
		
		
		return 0;
//end
}
