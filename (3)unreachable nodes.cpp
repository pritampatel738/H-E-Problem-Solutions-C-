#include<bits/stdc++.h>
using namespace std;
bool visited[1000000];
vector<int> adj[1000000];

void dfs(int x){
		
		visited[x]=true;
		
		for(int i=0;i<(int)adj[x].size();i++){
				if(visited[adj[x][i]]==false)
					dfs(adj[x][i]);
			}
	
	}
int main(){
	int n,m;
	cin>>n>>m;
	memset(visited,false,sizeof visited);
	while(m--){
			int a,b;
			cin>>a>>b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		
	int connected_comp=0;
	int x;
	cin>>x;
	dfs(x);
	
	for(int i=1;i<=n;i++){
			if(visited[i]==false)
				connected_comp++;
		}
	cout<<connected_comp;
return 0;
}
