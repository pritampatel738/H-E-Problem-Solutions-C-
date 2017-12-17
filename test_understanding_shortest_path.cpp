#include<bits/stdc++.h>
using namespace std;



int main(){

	int n,m;
	cin>>n>>m;
	vector<int> v[n+5];
	for(int i=0;i<n+5;i++)
		v[i].clear();
	for(int i=1;i<=m;i++){
			int s,d,w;
			cin>>s>>d>>w;
			
			v[i].push_back(s);
			v[i].push_back(d);
			v[i].push_back(w);
		}
	int dist[1099999];
	for(int i=0;i<m+2;i++)
		dist[i]=1000000000;
		
	dist[1]=0;
	
	for(int i=1;i<=n-1;i++){
			int j=1;
			
			while(v[j].size() != 0){
					if(dist[v[j][0]] + v[j][2] < dist[v[j][1]])
						dist[v[j][1]] = dist[v[j][0]] + v[j][2];
					j++;
				}
		}
	for(int i=2;i<=n;i++)
		cout<<dist[i]<<" ";

return 0;
}
