#include<bits/stdc++.h>

#define vi vector<int>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pb push_back
#define f(i,x,n) for(long long int i=x;i<n;i++)
#define ll long long int
using namespace std;

bool pow (int x)
{
    return x && (!(x&(x-1)));
}
int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        if(n==1)
            cout<<"Alice\n";
        if(n==2)    
            cout<<"Bob\n";

        if(n%2==0 && n!=2){
            if(pow(n+2))
                cout<<"Bob\n";
            else    
                cout<<"Alice\n";
        }
        if(n%2!=0 && n!=1){
            if(pow(n+1))
                cout<<"Alice\n";
            else 
                cout<<"Bob\n";
        }
        
    }


    return 0;
}