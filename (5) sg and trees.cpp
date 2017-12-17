#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1000000];
bool visited[1000000];
bool flag=false;
void dfs(int a,int b){
	
		visited[a]=true;
		
		for(int i=0;i<(int)adj[a].size();i++){
				if(visited[adj[a][i]]==false){
						if(adj[a][i]==b){
							flag=true;
						}
							dfs(adj[a][i],b);
					}
			}
	}

int main(){

	int n;
	cin>>n;
	for(int i=0;i<n-1;i++){
			int s,d;
			cin>>s>>d;
			adj[s].push_back(d);
			adj[d].push_back(s);
		}
	int q;
	cin>>q;
	
	while(q--){
		memset(visited,false,sizeof(visited));
		flag=false;
		int a,b;
		cin>>a>>b;
		dfs(a,b);
		if(flag)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
			
		}
return 0;
}
