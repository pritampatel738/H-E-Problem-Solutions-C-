#include<bits/stdc++.h>
using namespace std;
bool visited[1005][1005];
int adj[1005][1005];
int tim=0;

void bfs(int x,int y){
	
		tim++;
		queue< pair<int,int> > q;
		q.push(make_pair(x,y));
		//visited[x][y]=true;
		adj[x][y]=2;
		while(!q.empty()){
				x=q.front().first;
				y=q.front().second;
				q.pop();
				
				if(adj[x+1][y]==1){
						//visited[x+1][y]=true;
						//sub+=1;
						adj[x+1][y]=2;
						q.push(make_pair(x+1,y));
					}
				if(adj[x][y+1]==1){
						//visited[x][y+1]=true;
						//sub+=1;
						adj[x][y+1]=2;
						q.push(make_pair(x,y+1));
					}
				if(adj[x][y-1]==1){
						//visited[x][y-1]=true;
						//sub+=1;
						adj[x][y-1]=2;
						q.push(make_pair(x,y-1));
					}
				if(adj[x-1][y]==1){
						//visited[x-1][y]=true;
						//sub+=1;
						adj[x-1][y]=2;
						q.push(make_pair(x-1,y));
					}
			}
	
	}
int main(){
	//memset(visited,false,sizeof(visited));
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++)
				cin>>adj[i][j];
		}
		
		
	for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
					if(adj[i][j]==2){
							bfs(i,j);
						}
				}
		}
	cout<<tim;
	
return 0;
}
/*3 5
2 1 0 2 1
1 0 1 2 1
1 0 0 2 1

SAMPLE OUTPUT

2

*/
