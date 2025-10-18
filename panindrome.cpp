#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
n>65536?cout<<-n-1:cout<<n;

return 0;
}