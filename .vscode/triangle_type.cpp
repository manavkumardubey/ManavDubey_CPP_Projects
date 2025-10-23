#include <iostream>
using namespace std;
int main()
{float a,b,c;
    cout<<"Enter the three sides"<<endl;
    cin>>a>>b>>c;
    if(a+b<=c||a+c<=b||b+c<=a)
   { cout<<"Invalid triangle: does not satisfy the triangle inequality rule"<<endl;}
   else if (a==b&&b==c)
    {cout<<"Triangle is equilateral."<<endl;}
    else if(a==b||b==c)
    {cout<<"Triangle is isosceles."<<endl;}
    else {cout<<"Triangle is scalene";}
    return 0;









}