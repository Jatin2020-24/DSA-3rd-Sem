#include<iostream>
using namespace std;

void mulTable(int n)
{
    for(int i=1;i<11;i++){
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
}

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    mulTable(a);
}