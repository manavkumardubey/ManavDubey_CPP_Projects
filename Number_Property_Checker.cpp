#include <iostream>
using namespace std;
 int main()
 {
    int n;
    cout<<"Enter Your Number"<<endl;
    cin>>n;
     if (n<0) {cout<<"negative "<<endl;}
    else if(n>0) {cout<<"positive "<<endl;}
    else {cout<<"Zero "<<endl;}
    if (n%2==0) {cout<<"Even "<<endl;}
    else {cout<<"odd "<<endl;}
   
    if (n%3==0&&n%5==0)
    {cout<<"The number is divisible by both 3 and 5 hence it is a multiple of both 3 and 5. ";}
    else {cout<<"The number is not a multiple of both 3 and 5";}
    return 0;







 }