#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100003];
bool visited[100003];
int count_route=0;
void dfs(int s){
		visited[s]=true;
		count_route+=1;
		for(int i=0;i<(int)adj[s].size();i++){
				if(!visited[adj[s][i]])
					dfs(adj[s][i]);
			}
	}
int main(){
	int n,m;
	cin>>n>>m;
	memset(visited,false,sizeof visited);
	while(m--){
			int s,d;
			cin>>s>>d;
			adj[s].push_back(d);
			adj[d].push_back(s);
		}
	int x;
	cin>>x;
	bool flag=true; // connected...
	visited[x]=true;
	for(int i=0;i<n;i++){
			if(!visited[i]){
					dfs(i);
					if(count_route !=n-1){
							flag=false;
							break;
						}
				}
		}
	if(!flag)
		cout<<"Not Connected";
	else
		cout<<"Connected";
	
return 0;
}
