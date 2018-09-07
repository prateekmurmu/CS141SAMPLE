#include <iostream>

using namespace std;

int main () {
//declare variable
		int n;
//introduction
		cout << "To print a Hollow Square Star Pattern of desired number of columns or rows." << endl;

		cout << "-----------------------------------------------------------------------------" << endl;
//ask the viewer for the data
		cout << "Type the number of rows or columns you desire..." << endl;
//input it
		cin >> n;
//for loop to print n stars
		for (int i = 1; i <= n; i++) {
// for loop and condition to make it a hollow square star pattern
		for (int j = 1; j <= n; j++) {

		if (i == 1 || i == n || j == 1 || j == n) {

			cout << "*";

}

		else cout << " ";

}
  		cout << endl;
}

//end
return 0;

}
