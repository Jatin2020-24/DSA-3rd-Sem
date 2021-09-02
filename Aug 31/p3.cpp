#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a==0)
        return b;
    return gcd(b%a, a);
}

int main(){
    int n,a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"GCD of "<<a<<" and "<<b<<" is: "<<gcd(a,b);
    
    
    return 0;
}