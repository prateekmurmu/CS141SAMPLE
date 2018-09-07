#include <iostream>

using namespace std;

int main () {
//declare the variable
		int n;
//introduction
		cout << "To print a square star pattern..." << endl;

		cout << "-----------------------------------" << endl;
//ask the user for the data
		cout << "Type the number of stars which are going to make the pattern..." << endl;
//input it
		cin >> n;
//for loop to print n stars
		for (int i = 0; i < n; i++){
//for loop to make it  square pattern
		for (int j = 0; j < n; j++) {

			cout << "*";


}

		cout << endl;
}
//end
return 0;

}
