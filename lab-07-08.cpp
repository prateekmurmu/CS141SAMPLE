//8. Write a C++ program to find sum of digits of a given number using recursion.
//include the library
#include <iostream>
//use standard namespace
using namespace std;
//write a function to get the sum of digits of a given number
int sumdigit(int a)
	{
	if (a==0)//condition for breaking the palindrome
		return 0;
	else
		{
		int A=a%10;//to find all the digits
		a=a/10;//to eliminate the nuber which digitg have been found
		return A+sumdigit(a);//recursion
	}
}
//write the main function
int main(){
	int a;
	cout<<"input a number"<<endl;
	cin>>a;
	sumdigit(a);
	cout<<"sum of all digits of the "<<a<<" number is "<<sumdigit(a)<<endl;
	return 0; 
}
//end
