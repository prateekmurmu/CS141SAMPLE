//6. Write a C++ program to find reverse of any number using recursion.
//include the library
#include <iostream>
//use standard namespace
using namespace std;
//write a function to print the reverse of any natural number
void reverse(unsigned long long int A)
	{
	if(A==0)//condion is given to stop the programe when reminder reaches 0
		{
		cout<<endl;
	}
	else
		{
		//reminder of a number is first printed that means the last number is printed
		unsigned long long int a=A%10;
		cout<<a;
		//we need to continue the the process so by deviding 10 we exclude the number and ther programe continue till the first number is out
		A=A/10;	
		reverse(A);//recursion of programe
	}
}
//write the main function
int main()
	{
	int a;
	cout<<"Input a number"<<endl;
	cin>>a;
	reverse(a);
	return 0;
}
//end
