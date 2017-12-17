#include<bits/stdc++.h>
using namespace std;
bool visited[1005][1005];
int adj[1005][1005];


int bfs(int x,int y){
	
		int ans=1;
		visited[x][y]=true;
		
		queue< pair<int,int> > 	q;
		q.push(make_pair(x,y));
		
		while(!q.empty()){
				int l=q.front().first;
				int m=q.front().second;
				q.pop();
				for(int i=-1;i<=1;i++){
						for(int j=-1;j<=1;j++){
								if(!visited[l+i][m+j] && adj[l+i][m+j]){
										q.push(make_pair(l+i,m+j));
										visited[i+l][j+m]=true;
										ans++;
									}
							}
					}
			
			}
		return ans;
	
	}

int main(){

	int t;
	cin>>t;
	
	while(t--){
		memset(adj,0,sizeof(adj));
		memset(visited,false,sizeof(visited));
		
			int n,m;
			cin>>n>>m;
			
			for(int i=1;i<=n;i++){
					for(int j=1;j<=m;j++)
						cin>>adj[i][j];
				}
			int ans=0;
			int connected_comp=0;
			
			for(int i=1;i<=n;i++){
					for(int j=1;j<=m;j++){
						
							if(!visited[i][j] && adj[i][j]){
									
									connected_comp++;
									ans=max(bfs(i,j),ans);
								}
						}
				}
		cout<<connected_comp<<" "<<ans<<endl;
		}
return 0;
}
