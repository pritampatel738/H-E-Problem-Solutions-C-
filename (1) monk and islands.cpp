#include<bits/stdc++.h>
using namespace std;
bool visited[10005];

void bfs(int s,int n,vector<int> adj[]){
		int level[100000];
		queue<int> q;
		q.push(s);
		visited[s]=true;
		level[s]=0;
		while(!q.empty()){
				int t=q.front();q.pop();
				for(int i=0;i<(int)adj[t].size();i++){
						if(visited[adj[t][i]]==false){
								visited[adj[t][i]]=true;
								level[adj[t][i]]=level[t]+1;
								q.push(adj[t][i]);
							}
					}
			}
		cout<<level[n]<<endl;
	}
int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		
	int n,e;
	cin>>n>>e;
	vector< int> adj[n+1];
	while(e--){
			memset(visited,false,sizeof visited);
			
			int s,d;
			cin>>s>>d;
			adj[s].push_back(d);
			adj[d].push_back(s);
		}
		
	bfs(1,n,adj);
}
return 0;
}
