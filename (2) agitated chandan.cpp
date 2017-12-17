#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	while(t--){
	int n;
	cin>>n;
	bool visited[n+1];
	memset(visited,false,sizeof visited);
	vector< pair<int,int> > adj[n+1];
	for(int i=0;i<n-1;i++){
			int s,d,w;
			cin>>s>>d>>w;
			adj[s].push_back(make_pair(d,w));
			adj[d].push_back(make_pair(s,w));
		}
	long long dist[n+1];
	dist[1]=0;
	visited[1]=true;
	queue<int> q;
	q.push(1);
	int ans=0;
	while(!q.empty()){
			int t=q.front();
			q.pop();
			for(int i=0;i<(int)adj[t].size();i++){
					if(visited[adj[t][i].first]==false){
							dist[adj[t][i].first]=dist[t]+adj[t][i].second;
							//ans=max(ans,dist[adj[t][i].first]);
							visited[adj[t][i].first]=true;
							q.push(adj[t][i].first);
						}
				}
		}
	
	int idx;
	for(int i=1;i<=n;i++){
		
			if(ans<=dist[i]){
				ans=dist[i];
				idx=i;
			}
		}
	//cout<<"the index corresponding to max dist is"<<idx<<endl;
	bool vis[n+1];
	memset(vis,false,sizeof vis);
	
	int dis[n+1];
	dis[idx]=0;
	queue<int> a;
	a.push(idx);
	vis[idx]=true;
	while(!a.empty()){
			int t=a.front();
			a.pop();
			
			for(int i=0;i<(int)adj[t].size();i++){
					if(vis[adj[t][i].first]==false){
							dis [adj[t][i].first]=dis[t]+adj[t][i].second;
							vis[adj[t][i].first]=true;
							a.push(adj[t][i].first);
						
						}
				}
		
		}
	ans=0;
	for(int i=1;i<=n;i++){
			if(ans<=dis[i])
				ans=dis[i];
		}
    //If maximum distance is <100, cost = 0.
    if(ans<100)
		cout<<0<<" ";
	else if(ans>100 && ans<1000)
		cout<<100<<" ";
    //If maximum distance is > 100, cost = 100.
    else if(ans>1000 && ans<10000)	
		cout<<1000<<" ";
    //If maximum distance is > 1000, cost = 1000.
    else
		cout<<10000<<" ";
    //If maximum distance is > 10000, cost = 10000.
	cout<<ans<<endl;
}
return 0;
}
