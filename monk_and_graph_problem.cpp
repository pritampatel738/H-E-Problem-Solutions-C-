#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100002];
bool visited[100002];
int count_route=0;
//int arr[100002];
void dfs(int s){
		visited[s]=true;
		count_route+=(int)adj[s].size();
		for(int i=0;i<(int)adj[s].size();i++){
				if(!visited[adj[s][i]])
					dfs(adj[s][i]);
			}
	}
int main(){
	//memset(arr,0,sizeof arr);
	memset(visited,false,sizeof visited);
	
	int n,m;
	cin>>n>>m;
	
	while(m--){
			int d,s;
			cin>>s>>d;
			//arr[s]+=1;
			//arr[d]+=1;
			adj[s].push_back(d);
			adj[d].push_back(s);
		}
	vector<int> v;
	
	for(int i=1;i<=n;i++){
		
			if(!visited[i]){
					count_route=0;
					dfs(i);
					count_route/=2;
					v.push_back(count_route);
				}
		}
	cout<<*max_element(v.begin(),v.end());
return 0;
}
