#include <iostream>
using namespace std;
 int main()
 {
    int x,n,fact=1;
    cin>>n;
    for(x=n;x>0;--x)
    { fact=fact*x;
      cout<<fact<<", ";
    }
    cout<<fact;
    return 0;







 }