/*Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). 
Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth. 
Compare the areas and perimeter of the those rectangles.*/

//include the library
#include <iostream>
//use standard namespace
using namespace std;
class rectangle//create a class rectangle
{
    public:
        double length;
        double bredth;
        double area();//the area function
        double perimeter();//the function perimeter
};
double rectangle::area()
    {
        return length*bredth;
    }
double rectangle::perimeter()
    {
        return 2*(length+bredth);
    }
int main()
    {   
        double a,b,c,d,area1,perimeter1,area2,perimeter2;
        rectangle r1;//use the following class to create two rectangles (rectangle objects) of length and breadth according
        rectangle r2;
        cout<<"Input the length and breadth of the first rectangle"<<endl;
        cin>>a>>b;
        r1.length= a;      r1.bredth= b;
        area1=r1.area();     perimeter1=r1.perimeter();//call the function of rectangle r1
        cout<<"the area of the first rectangle is "<<area1<<endl;
        cout<<"The perimeter of the first retangle is "<<perimeter1<<endl;
        cout<<"Input the length and bredth of the second rectangle ."<<endl;
        cin>>c>>d;
        r2.length= c;      r2.bredth= d;
        area2=r2.area();     perimeter2=r2.perimeter();//call the function of rectangle r2
        cout<<"the area of the second rectangle is "<<area2<<endl;
        cout<<"The perimeter of the ssecond retangle is "<<perimeter2<<endl;
        //write a conditional to compare the area and the perimeter of both the rectangles
        if(area1>area2 && perimeter1>perimeter2)
            cout<<"Area and perimeter of the first rectangle is more"<<endl;
        else if(area1>area2 && perimeter1<perimeter2)
            cout<<"Area  the first rectangle is more and perimeter of the second rectangle is more"<<endl;
        else if(area1<area2 && perimeter1>perimeter2)
            cout<<"Area  the second rectangle is more and perimeter of the first rectangle is more"<<endl;
        else 
            cout<<"Area and perimeter of the second rectangle is more"<<endl;
        return 0;
}
//end
