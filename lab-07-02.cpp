//2. Write a C++ program to print all natural numbers between 1 to n using recursion.
//include library
#include <iostream>
//use standard namespace
using namespace std;
//to print all number we have to go from 1 to that number
void pop(int a, int b)
	{
	if (a==b)//recurtion will stop when the number stop at the given number n
		cout<<endl;
	else
		{
		b++;
		cout<<endl<<b<<endl;
		pop(a,b);//recurtion of the function
	}
}
//start the main function
int main(){
	int n;
	cout<<"Type a number;"<<endl;
	cin>>n;
	pop(n,0);
	return 0;
}
//end
