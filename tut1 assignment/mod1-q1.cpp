#include <iostream>
#include <unordered_set>
#include <vector>
#define ll long long 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        ll k ,n;
        cin>>n>>k;
        
        //vector<ll>v(n);
        ll ans = 0;
        unordered_set<ll>mp;
        //ll count_0 = 0;
        for(int i=0;i<n;i++){
            ll v;
            cin>>v;
            if(v > 0)
            mp.insert(i);
            
            ans += v;
        }
        
        if(mp.size() == 0){
            cout<<0<<endl;
            continue;
        }
        
        if(k > 0){
            ans = ans + 2*(mp.size());
            k--;
        }
        
        
        while(mp.size() < n && k > 0){
            unordered_set<ll>temp;
            temp = mp;
            
            for(auto x: temp){
                mp.insert((x+1)%n);
                if(x == 0)
                mp.insert(n-1);
                else
                mp.insert(x-1);
            }
            
            ans = ans + (mp.size())*2;
            k--;
            
        }
        
        ans = ans + (mp.size())*2*k;
        
        cout<<ans;
        
        cout<<endl;
        
        
    }
    
	return 0;
}
