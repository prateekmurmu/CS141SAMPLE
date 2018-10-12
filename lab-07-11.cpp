//11. Write a C++ program to find GCD (HCF) of two numbers using recursion.
//include the library
#include <iostream>
//use standard namespace
using namespace std;
//write a funtion to print the HCF of two numbers
int hcf(int A,int B)
	{
	if (B==0)//for stopping the recursion
		return A;
	else 
		{
		return hcf(B,A%B);//recursion
	}
}
//write the main function
int main()
	{
	int a,b;
	cout<<"Enter two numbers "<<endl;
	cin>>a;
	cin>>b;
	hcf(a,b);
	cout << "H.C.F of "<<a<<" and "<<b<<" is "<< hcf(a,b)<<endl;
	return 0;
}
//end
