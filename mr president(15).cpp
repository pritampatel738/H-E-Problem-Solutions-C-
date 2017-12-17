#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

pair<ll,pair<ll,ll> > p[1000000];
ll arr[1000000];
bool visited[1000000];
ll n,m,k;
void initialize(){
		for(int i=0;i<1000000;i++)
			arr[i]=i;
	
	}
ll root(ll i){
		while(arr[i]!=i){
			
				arr[i]=arr[arr[i]];
				i=arr[i];
			}
		return i;
	}
void union1(ll a,ll b){
	
		ll root_a=root(a);
		ll root_b=root(b);
		arr[root_a]=arr[root_b];
	}
ll kruskal(){
	
		ll mincost=0;
		ll count=0;
		
		for(int i=0;i<m;i++){
			
				ll x=p[i].second.first;
				ll y=p[i].second.second;
				ll cost=p[i].first;
				
				if(root(x)!=root(y) && mincost<=k){
						mincost+=cost;
						if(mincost>k){
								
								mincost-=cost;
								if(mincost+1 <=k){
										visited[x]=true;
										visited[y]=true;
										count++;
									}
								
							}
						else{
								visited[x]=true;
								visited[y]=true;
							}
					union1(x,y);
					}
			}
	return count;
	}

int main(){
	memset(visited,false,sizeof visited);
	cin>>n>>m>>k;
	initialize();
	for(int i=0;i<m;i++){
		
			ll a,b,c;
			cin>>a>>b>>c;
			
			p[i]=make_pair(c,make_pair(a,b));
		}
	sort(p,p+m);
	ll count=kruskal();
	bool flag=false;
	for(int i=1;i<=n;i++){
			if(visited[i]==false){
				
					flag=true;
					cout<<-1<<endl;
					break;
				}
		}
	if(!flag){
			cout<<count<<endl;
		}
return 0;
}
