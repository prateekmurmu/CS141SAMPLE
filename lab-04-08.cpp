//include the library
#include <iostream>

//use standard name space
using namespace std;

//write the main function
int main(){

//declare the variables
		float a, b, c, d, e, f, g, h;

		cout << "To find the total marks secured, average and percentage obtained by a student in five subjects of full marks of 100 each..." << endl;

		cout << "____________________________________" << endl;

//mention the tasks to be done
		cout << "Enter the marks obtained by the student in the first subject..." << endl;

//input the value
		cin >> a;

//mention the tasks to be done
		cout << "Marks obtained in second subject..." << endl;

//input the value
		cin >> b;

//mention the tasks to be done
		cout << "Marks obtained in third subject..." << endl;

//input the value
		cin >> c;

//mention the tasks to be done
		cout << "Marks obtained in fourth subject..." << endl;

//input the value
		cin >> d;

//mention the tasks to be done
		cout << "Marks obtained in fifth subject..." << endl;

//input the value
		cin >> e;

//write the maths to be done for output
		f = a + b + c + d + e;

		g = f/5;

		h = (f/500)*100;

//write the output to be displayed
		cout << "Total marks obtained by the student is: " << f << endl;

		cout << "Average of the student is: " << g << endl;

		cout << "Percentage of the marks obtained by the student is: " << h << endl;

		return 0;
//end
}
