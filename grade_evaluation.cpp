#include <iostream>
using namespace std;
int main()
{
float a,b,c,d,e,n;
cout<<"Enter Student's Score"<<endl;
cin>>a>>b>>c>>d>>e;
n=(a+b+c+d+e)/5.0;
if (a<33||b<33||c<33||d<33||e<33) {cout<<"The student is failed in one or more subjects.";}
else if(n>=90)
{cout<<"A+";}
else if (n>=80)
   {cout<<"A";}
    else if(n>=70)
   { cout<<"B";}
   else if (n>=60)
{cout<<"C";}
else {cout<<"F";}

return 0;
}




