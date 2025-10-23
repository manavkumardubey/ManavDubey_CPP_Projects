#include <iostream>
using namespace std;
int main()
{
int m,n;
char op;
cout<<"Enter first number m"<<endl;
cin>>m;
cout<<"Enter operator (+,-,*,/,&)"<<endl;
cin>>op;
cout<<"Enter second number n"<<endl;
cin>>n;

switch (op){ case '+':
    cout<<m<<"+"<<n<<"= "<<m+n;
    break;
    case '-':
    cout<<m<<"-"<<n<<"= "<<m-n;
    break;
    case '*':
    cout<<m<<"*"<<n<<"= "<<m*n;
    break;


    case '/':
    if (n != 0)//can also use (n < 0||n>0), but it is a bit more complicated for the system.
    cout<<m<<"/"<<n<<"= "<<m/n;
     else {cout<<"Error: Division by zero!";}
    break;
    case '%':
    if (n!=0)
    cout<<m<<"%"<<n<<"= "<<m%n;
    else {cout<<"Error: Modulus by zero!"<<endl;}
    break;
    default:
    cout<<"Error: invalid operator"<<endl;
}
   
    return 0;












}