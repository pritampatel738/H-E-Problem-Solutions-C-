#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	
	ll n,m;
	cin>>n>>m;
	ll arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	
	//ll sum=0;
	ll count=0;
	sort(arr,arr+n);
	
	for(int i=0;i<n;i++){
		
			ll l=i+1;
			ll r=n-1;
			
			while(l<r){
				ll sum=(arr[i]+arr[l]+arr[r]);
				//double a=sum/3;
					if(sum%m==0){
						count++;
				   }
				  //if(a
		}
	cout<<count;
return 0;
}

