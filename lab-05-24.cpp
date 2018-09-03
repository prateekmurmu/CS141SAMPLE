//include the library
#include<iostream>

//use standard namespace
using namespace std;

//write the main function
int main()
{

//introduction to the program
cout << "To display the alphabets from a to z..." << endl;
cout << "==============================================" << endl;
cout << "The alphabets from a to z are: " << endl;

//declare the variable
char ch = 'a';

//start the while statement
while (ch >= 'a' && ch <= 'z')
{
cout << ch << endl;
ch++;
}

//end
return 0;
}

