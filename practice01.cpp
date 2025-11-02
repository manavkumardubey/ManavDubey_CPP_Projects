#include <iostream>
using namespace std;
int main()
{
    int subject1,subject2,subject3,subject4,subject5,percentage,n;
    cin>>subject1>>subject2>>subject3>>subject4>>subject5;
    percentage=(subject1+subject2+subject3+subject4+subject5)*100/500;
    n=percentage/10;
    switch (n){
    case 0:
    cout<<"F";
    break;
    case 1:
    cout<<"F";
    break;
    case 2: 
    cout<<"F";
    break;
    case 3:
    cout<<"F";
    break;
    case 4:
    cout<<"C";
    break;
    case 5:
    cout<<"C";
    break;
    case 6:
    cout<<"A";
    break;
    case 7:
    cout<<"A";
    break;
    case 8:
    cout<<"A+";
    break;
    case 9:
    cout<<"A+";
    break;
    case 10:
    {cout<<"A+";}
    break;
    default:
    {cout<<"Error!";}}
    
    
    
    
    
    
    
    
    
    
    
}