#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1000000];
bool visited[1000000];
//int count=0;
int t=0;
int arr[4];
void dfs(int s){
		
			visited[s]=true;
			
			for(int i=0;i<(int)adj[s].size();i++){
					if(visited[adj[s][i]]==false){
						int x=adj[s][i];
						if(t==0){
								int x=adj[s][i];
								if((adj[x].size()-1) > adj[s].size())
									arr[0]++;
								t=1;
							}
							
						else if(adj[x].size() > adj[s].size()){
								//count++;
								arr[0]++;
							}
						dfs(adj[s][i]);
						}
				}	
	}
int main(){
	//count=0;
	arr[0]=0;
	int n,m;
	cin>>n>>m;
	memset(visited,false,sizeof visited);
	while(m--){
			int s,d;
			cin>>s>>d;
			adj[s].push_back(d);
			adj[d].push_back(s);
		}
	for(int i=1;i<=n;i++){
			if(visited[i]==false){
					dfs(i);
				}
		}
		
	//cout<<count;
	cout<<arr[0];
return 0;
}
