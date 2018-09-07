#include <iostream>

using namespace std;

int main ()
{
//declare the variable
	int n;
//introduction
	cout << "To print a Hollow Right Triangle Star pattern." << endl;

	cout << "----------------------------------------" << endl;
//ask the viewer for data
	cout << "Type the number of stars you want in the height or the base of the hollow right triangle..." << endl;
//input it
	cin >> n;
//for loop to print n stars
	for (int i =1; i <= n; i++)
	{
//for loop and conditions to make it a hollow right angled triangle
		for (int j = 1; j <= n; j++)
		{

			if (i == n || j == 1 || j == i)
			{

				cout << "*";

			}

			else cout << " ";

		}
		cout << endl;
	}
//end
return 0;

}
