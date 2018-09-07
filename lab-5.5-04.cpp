#include <iostream>

using namespace std;

int main ()
{
//declare the variable
	int n;
//introduction
	cout << "To print a rhombus star pattern." << endl;

	cout << "___________________________________" << endl;
//ask the viewer for the data
	cout << "Type the number of rows you want in the rhombus star pattern..." << endl;
//input it
	cin >> n;
//start for loop to print n stars
	for (int i = 1; i <= n; i++)
	{
//for loop to include spaces
		for (int j = 1; j <= n - i; j++)
		{

			cout << " ";

		}

//for loop to include stars		
		for (int j = 1; j <= n; j++)
		{

			cout << "*";

		}

		cout << endl;

	}
//end
	return 0;

}
