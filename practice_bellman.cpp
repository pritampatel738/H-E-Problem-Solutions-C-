#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> > adj[10000];

int main(){
	int n=4,m=5;
	
	
	while(m--){
			int s,d,w;
			cin>>s>>d>>w;
			
			adj[s].push_back(make_pair(d,w));
		}
		
	int dist[10000];
	for(int i=0;i<1000;i++)
		dist[i]=1e9;
		
	dist[1]=0;
	
	int j=1;
	for(int i=1;i<=n-1;i++){
		
			
			cout<<" the value of j is "<<j<<endl;
			for(int k=0;k<(int)adj[j].size();k++){
				
					int a= adj[j][k].first;
					int b = adj[j][k].second;
					
					cout<<a<<" "<<b<<endl;
					if(dist[j] + b < dist[a]){
						dist[a]=dist[j] + b;
						cout<<" the distance of "<<a<<" is "<<dist[a]<<endl;
					}
				}
			j++;
			
		}
	for(int i=2;i<=n;i++)
		cout<<dist[i]<<" ";
	cout<<endl;
return 0;
}
