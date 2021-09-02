#include <iostream>  
using namespace std;  

void armstrong(int n)
{
    int r,sum,temp;
    temp=n;
    while(n>0){
        r = n%10;
        sum+=(r*r*r);
        n/=10;
    }
    if(temp==sum)
        cout<<"Armstrong Number\n";
    else
        cout<<"Not Armstrong Number\n";
}

int main()  
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    armstrong(n);

    return 0;
}