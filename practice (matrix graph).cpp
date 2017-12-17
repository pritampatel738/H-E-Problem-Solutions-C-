#include<bits/stdc++.h>
using namespace std;
bool visited[1005][1005];
int adj[1005][1005];
int ans=0;
void bfs(int x,int y){
		//ans++;
		visited[x][y]=true;
		queue< pair<int,int> > q;
		q.push(make_pair(x,y));
		
		while(!q.empty()){
			
			
				x=q.front().first;
				y=q.front().second;
				q.pop();
				
				for(int i=-1;i<=1;i++){
						for(int j=-1;j<=1;j++){
							
								if(!visited[x+i][y+j] && adj[x+i][y+j]){
										//ans++;
										visited[x+i][y+j]=true;
										q.push(make_pair(x+i,y+j));
									}
							}
					}
			
			}
		
	}



int main(){
    int n,m;
    cin>>n>>m;
    memset(visited,false,sizeof visited);
    memset(adj,0,sizeof adj);
    for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
					cin>>adj[i][j];
				}
		}
	cout<<endl;
	for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
					cout<<adj[i][j]<<" ";
				}
			cout<<endl;
		}
		cout<<endl;
	for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
					if(!visited[i][j] && adj[i][j]){
							ans++;
							bfs(i,j);
						}
				
				}
		}
	cout<<ans<<endl;
return 0;
}
