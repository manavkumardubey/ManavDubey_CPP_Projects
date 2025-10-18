#include <iostream>
using namespace std;
int main()
{   char n;
    cout<<"Enter The Alphabet"<<endl;
    cin>> n;
    n = tolower(n);
    if (!isalpha(n))
    {cout<<"Error! Non alphabet character entered.";}
    else { if (n=='a'|| n=='e'|| n=='i'||n=='o'||n=='u') {cout<<n<<" Is Vovel";}
    else {cout<<n<<"Is constant";}
}
    




}