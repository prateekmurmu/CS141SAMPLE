#include <iostream>

using namespace std;

int main ()
{
//declare the variable
	int n;
//introduction
	cout << "To print a Right Triangle Star pattern." << endl;

	cout << "----------------------------------------" << endl;
//ask to the viewer for the data
	cout << "Type the number of stars you want in the height or the base of the right triangle..." << endl;
//input it
	cin >> n;
//start for loop for printing n stars
	for (int i =1; i <= n; i++)
	{
//for loop to print a triangle specifically with *
		for(int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
//end  
    return 0;
}
