#include<bits/stdc++.h>
using namespace std;
vector< pair<int,int> > adj[1000000];
bool visited[1000000];

void dfs(int s){
		cout<<s<<" ";
		visited[s]=true;
		for(int i=0;i<(int)adj[s].size();i++){
				pair<int,int> v=adj[s][i];
				if(!visited[v.first])
					dfs(v.first);
			}
	}
int main(){
	memset(visited,false,sizeof visited);
	int n,e;
	cin>>n>>e;
	
	while(e--){
			int s,d,w;
			cin>>s>>d>>w;
			
			adj[s].push_back(make_pair(d,w));
			adj[d].push_back(make_pair(s,w));
		
		}
	dfs(1);
return 0;
}
