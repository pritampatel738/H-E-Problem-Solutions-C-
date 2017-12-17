#include<bits/stdc++.h>
using namespace std;
bool visited[1000000];
vector< pair<int,int> > adj[1000000];

int main(){
	memset(visited,false,sizeof visited);
	int n,e;
	cin>>n>>e;
	
	
	while(e--){
		
			int s,d,w;
			cin>>s>>d>>w;
			adj[s].push_back(make_pair(d,w));
			adj[d].push_back(make_pair(s,w));
		}
	queue<int> q;
	int color[1000];
	for(int i=0;i<100;i++)
		color[i]=10;
	color[1]=0;
	
	q.push(1);
	bool isBipartite=true;
	while(!q.empty() && isBipartite){
			int t=q.front();
			q.pop();
			for(int i=0;i<(int)adj[t].size();i++){
					if(color[adj[t][i].first]==10){
							q.push(adj[t][i].first);
							color[adj[t][i].first]=1-color[t];
						}
					else if(color[adj[t][i].first]==color[t]){
							isBipartite=false;
							break;
						}
				}
		}
	if(isBipartite)
		cout<<"bipartite"<<endl;
	else
		cout<<"not a bipartite"<<endl;
return 0;
}
