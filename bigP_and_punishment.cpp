#include<bits/stdc++.h>
using namespace std;
vector<int> adj[10000+10];
bool visited[10005];
int count_route=0;


void dfs(int s){
		visited[s]=true;
		count_route++;
		for(int i=0;i<(int)adj[s].size();i++)
			if(!visited[adj[s][i]])
				dfs(adj[s][i]);
	}

int main(){

	int t;
	cin>>t;
	while(t--){
			int n,f,s;
			cin>>n>>f>>s;
			
			//vector<int> adj[n+1];
			for(int i=0;i<=n+2;i++){
					adj[i].clear();
					visited[i]=false;
				}
			for(int i=0;i<f;i++){
					int a,b;
					cin>>a>>b;
					adj[a].push_back(b);
				}
			count_route=0;
			for(int i=0;i<s;i++){
					int x;
					cin>>x;
					
						if(!visited[x])
							dfs(x);
				}
		cout<<count_route<<endl;
		}

return 0;
}
