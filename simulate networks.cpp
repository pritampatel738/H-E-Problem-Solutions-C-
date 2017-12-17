#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
pair<ll ,pair<ll,ll> > p[100005];
ll arr[100005];
ll c[100005];
ll n,m;
void initialize(){
		//cout<<"inside initialize"<<endl;
		for(int i=0;i<100005;i++)
			arr[i]=i;
	}
ll root(ll i){
	
		while(arr[i]!=i){
				arr[i]=arr[arr[i]];
				i=arr[i];
				//cout<<"inside while loop"<<endl;
			}
		return i;
	}
void union1(ll a,ll b){
	//cout<<"inside union"<<endl;
		ll root_a=root(a);
		ll root_b=root(b);
		arr[root_a]=arr[root_b];
	}
ll kruskal(){
		//cout<<"inside kruskal"<<endl;
		ll lat=0;
		ll idx=0;
		
		for(int i=0;i<m;i++){
			//cout<<"inside for loop"<<endl;
				ll x=p[i].second.first;
				ll y=p[i].second.second;
				ll cost=p[i].first;
				if(root(x)!=root(y)){
						if(cost>c[idx]){
								lat+=c[idx++];
							}
						else{
								lat+=cost;
							}
						union1(x,y);
					}
			}
	return lat;
	}
int main(){
	initialize();
	//cout<<"outside initialize"<<endl;
	cin>>n>>m;
	for(ll i=0;i<m;i++){
		
			ll a,b,c;
			cin>>a>>b>>c;
			p[i]=make_pair(c,make_pair(a,b));
		}
	ll q;
	//cout<<"insert the value of 	q"<<endl;
	cin>>q;
		for(ll i=0;i<q;i++)
				cin>>c[i];
			//cout<<"inside while"<<endl;
		
	//cout<<"sorting p"<<endl;
	sort(p,p+m);
	//cout<<"sorting c"<<endl;
	sort(c,c+q);
	ll latency=kruskal();
	cout<<latency;
return 0;
}
