//include library
#include <iostream>

//use standard namespace 
using namespace std;

//write main function
int main () {

//declare character
	char ch;

cout << "To check if the character you entered is a lowercase or an uppercase alphabet..." << endl;

cout << "--------------------------------------------------------------------------------" << endl;

//ask to type the character that is whished to check
cout << "Type the character you wish to check..." << endl;

//input the given character
cin >> ch;

//start condional statements
if (ch >= 'a' && ch <= 'z') {

	cout << "Your entered character is a lowercase alphabet..." << endl;

}

else if (ch >= 'A' && ch <= 'Z') {

	cout << "Your entered character is an uppercase alphabet..." << endl;

}

else cout << "Your entered character is not an alphabet..." << endl;

return 0;

//end
}
