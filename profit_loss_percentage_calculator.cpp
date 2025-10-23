#include <iostream>
using namespace std;
int main()
{
float cp,sp;
cout<<"Enter cost price and selling price respectively:"<<endl;
cin>>cp>>sp;
if (cp==0||sp==0)
{cout<<"Invalid input: Prices must be postive numbers."<<endl;
return 0; }
if (cp>sp)
{cout<<"Loss."<<endl<<"Loss percentage = "<<(cp-sp)*100/cp<<endl;}
else if(cp<sp)
{cout<<"Profit."<<endl<<"Profit percentage = "<<(sp-cp)*100/cp<<endl ;}
else{cout<<"No profit nor a loss."<<endl;}
return 0;





}