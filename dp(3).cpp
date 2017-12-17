#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	cin>>t;
	while(t--){
		
			ll n,k;
			cin>>n>>k;
			
			ll h[n];
			for(int i=0;i<n;i++)
				cin>>h[i];
			
			ll maxx=0;
			ll curr_maxx=0;
			
			for(int i=0;i<n;i++){
					curr_maxx=0;
					if(h[i]<=k){
							while(h[i] <= k){
									curr_maxx+=h[i];
									i++;
								}
						}
					maxx=max(curr_maxx,maxx);
				}
			cout<<maxx<<endl;
		}

return 0;
}
