#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int x,y,h,k,r;
   double d;
   cout<<"Enter your number"<<endl;
   cin>>x>>y>>h>>k>>r;
   d=sqrt((x-h)*(x-h)+(y-k)*(y-k));
   (d==r)?cout<<"On The Circle":((d>r)?cout<<"outside":cout<<"inside");
return 0;
}