#include<bits/stdc++.h>
using namespace std;
int adj[1005][1005];
bool visited[1005][1005];
int sub=0;

int bfs(int x,int y){
	
		visited[x][y]=true;
		queue< pair<int,int> > q;
		q.push(make_pair(x,y));
		sub=1;
		while(!q.empty()){
				x=q.front().first;
				y=q.front().second;
				q.pop();
				if(!visited[x+1][y]&&adj[x+1][y]){
						visited[x+1][y]=true;
						sub+=1;
						q.push(make_pair(x+1,y));
					}
				else if(!visited[x][y+1]&&adj[x][y+1]){
						visited[x][y+1]=true;
						sub+=1;
						q.push(make_pair(x,y+1));
					}
				else if(!visited[x][y-1]&&adj[x][y-1]){
						visited[x][y-1]=true;
						sub+=1;
						q.push(make_pair(x,y-1));
					}
				else if(!visited[x-1][y]&&adj[x-1][y]){
						visited[x-1][y]=true;
						sub+=1;
						q.push(make_pair(x-1,y));
					}
			}
		return sub;
	}

int main(){
	memset(adj,0,sizeof(adj));
	memset(visited,false,sizeof(visited));
	int n,m,q;
	scanf("%d %d %d",&n,&m,&q);
	int no=0;
	for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
					scanf("%d",&adj[i][j]);
					if(adj[i][j]==1)
						no++;
				}
		}
	int count=0;
	while(q--){
			int x,y;
			scanf("%d %d",&x,&y);
			sub=0;
			if(!visited[x][y] && adj[x][y])
				sub=bfs(x,y);
			count+=sub;
			printf("%d\n",no-count);
		}
return 0;
}

/*
 * 3 3 3
0 0 0
1 0 1
0 1 1
1 2
2 2
3 3

SAMPLE OUTPUT

4
4
1
*/

