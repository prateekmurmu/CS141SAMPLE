//3. Write a C++ program to print all even or odd numbers in given range using recursion.
//include the libraries
#include <iostream>
#include<string>
//use standard namespace
using namespace std;
//write a function to print even numbers
void print_even(int a, int b)
	{
	if (a==b)//recurtion will stop when the number stop at the given number n
			{
			cout<<endl;
		}
	else
		{
		b++;
		if(b%2==0)
			{
			cout<<b<<" , ";
		}
		print_even(a,b);//recursion of the function
	}
}
//write a function to write odd numbers
void print_odd(int a, int b)
	{
	if (a==b)//recurtion will stop when the number stop at the given number n
		cout<<endl;
	else
		{
		b++;
		if(b%2 != 0)
			{
			cout<<b<<" , ";
		}
		print_odd(a,b);//recurtion of the function
	}
}
//start the main function
int main(){
	int n;
	int A;
	cout<<"Input the number"<<endl;
	cin >>n;
	cout<<"choose an option"<<endl;
	cout<<"1. print all even numbers."<<endl;
	cout<<"2. print all odd numbers."<<endl;
	cin>> A;
	if(A==1)
		print_even(n,0);
	else if(A==2)
		print_odd(n,0);
	else
		cout<<"you input an invalid option"<<endl;
	return 0;
}
//end
