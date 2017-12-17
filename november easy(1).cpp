#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[1000000];
int main(){
	memset(dp,0,sizeof(dp));
	ll n;
	cin>>n;
	vector<ll> v;
	//ll arr[n];
	for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v.push_back(x);
		}
		
	ll length=0;
	//ll pres=0;
	//ll val=0;
	vector<ll>::iterator it;
	for(ll i=0;i<n;i++){
			ll temp=v[i];
			//pres=0;
			//cout<<dp[i]<<endl;
			if(dp[temp]==0){
					//cout<<"inside dp"<<endl;
					/*
					for(ll j=n-1;j>=i+1;j--){
							if(v[j]==temp){
								break;
							}
						pres++;
						}
						val=(n-i-pres);
						length=max(length,val);
						dp[i]=length;
						*/
				}
		}
	cout<<length;
return 0;
}
