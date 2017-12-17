#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	
	ll t;
	cin>>t;
	while(t--){
		
			ll n;
			cin>>n;
			ll arr[n];
			ll ar[n];
			
			for(int i=0;i<n;i++){
					cin>>arr[i];
					
				}
			ar[0]=arr[0];
			for(int i=1;i<n;i++){
					ar[i]=ar[i-1]+arr[i];
				}
			for(int i=0;i<n;i++)
				cout<<ar[i]<<" "<<arr[i]<<endl;
			ll q;
			cin>>q;
			while(q--){
				
					ll l,r;
					cin>>l>>r;
					cout<<ar[r-1]-ar[l-1]+arr[l-1]<<endl;
				}
			
		}
return 0;
}

/*1
5
4 3 2 1 5
3
1 2
2 4
1 4

SAMPLE OUTPUT

7
6
10

*/
