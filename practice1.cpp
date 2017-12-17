#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    vector<ll> v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    int q;
    cin>>q;
    
    sort(v.begin(),v.end());
    
    vector<ll>::iterator it;
    while(q--){
        
    ll x;
    cin>>x;
    it=lower_bound(v.begin(),v.end(),x);
    ll l=(it-v.begin())+1;
    cout<<l<<endl;
    }
    return 0;
}
