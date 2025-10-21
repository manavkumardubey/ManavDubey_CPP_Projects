//Electricity Bill Calculator (Moderate)
//Write a program that takes the number of electricity units consumed and calculates the total bill according to these rules:
//First 100 units → ₹1.5/unit
//Next 200 units → ₹2.5/unit
//Above 300 units → ₹4/unit

#include <iostream>
using namespace std;
int main()
{int n;
    cin>>n;
    n=n/100;
    switch(n){
        case 0:
        cout<<"1.5/unit";
        break;
        case 1:
        cout<<"2.5/unit";
        break;
        case 2:
        cout<<"4/unit";
        break;
        return 0;
    }
    //I thought hard but couldn't find a way to write a code for this using switch-break😒
    





}