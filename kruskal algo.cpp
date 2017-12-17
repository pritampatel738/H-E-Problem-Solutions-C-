#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define n 1000000
ll arr[n];
pair<ll,pair<ll,ll> > p[n];

void intialize(){
		for(int i=0;i<n;i++)
		{
				size[i]=1;
				arr[i]=i;
			}
	}
	

ll root(ll a){
		while(arr[i]!=i){
				arr[i]=arr[arr[i]];
				i=arr[i];
			}
		return i;
	}
void union1(ll a,ll b){
		ll root_a=root(a);
		ll root_b=root(b);
		
		 if(size[root_a]<size[root_b]){
				size[root_b]+=size[root_a];
				arr[root_a]=arr[root_b];
			 }
			else{
					size[root_a]+=size[root_b];
				}
	}
	

ll find(ll a,ll b){
		if(root[a]==root[b])
			return true;
		return false;
	}	

int main(){
	
return 0;
}
