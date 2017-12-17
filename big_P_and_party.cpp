#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100000];
bool visited[100000];
int n,e;
void bfs(int p){
		int level[n+1];
		level[p]=0;
		queue<int> q;
		q.push(p);
		
		while(!q.empty()){
				int s=q.front();
				q.pop();
				
				for(int i=0;i<(int)adj[s].size();i++){
						if(!visited[adj[s][i]]){
									level[adj[s][i]]=level[s]+1;
									visited[adj[s][i]]=true;
									q.push(adj[s][i]);
								}
					}
			}
		for(int i=1;i<n;i++){
				cout<<level[i]<<endl;
			}
	}
int main(){
	cin>>n>>e;
	
	while(e--){
			int s,d;
			cin>>s>>d;
			adj[s].push_back(d);
			adj[d].push_back(s);
		}
	bfs(0);
return 0;
}
