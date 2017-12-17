#include<bits/stdc++.h>
using namespace std;
int n,arr[22][22];
int visited[22][22];

int count_route=0;
void route(int i,int j){
	
		if(i==n && j==n){
				count_route++;
				return;
			}
		visited[i][j]=1;
		// try all the four possible cases........
		if(i+1<=n && visited[i+1][j]==0 && arr[i+1][j]==0)
			route(i+1,j);
		if(j+1<=n && visited[i][j+1]==0 && arr[i][j+1]==0)
			route(i,j+1);
		if(i-1>=1 && visited[i-1][j]==0 && arr[i-1][j]==0)
			route(i-1,j);
		if(j-1>=1 && visited[i][j-1]==0 && arr[i][j-1]==0)
			route(i,j-1);
		visited[i][j]=0;
		return;
	
	}

int main(){
	memset(visited,false,sizeof visited);
	int t;
	cin>>t;
	while(t--){
			cin>>n;
			for(int i=1;i<=n;i++)
				for(int j=1;j<=n;j++){
					cin>>arr[i][j];
					visited[i][j]=0;
				}
			count_route=0;
			route(1,1);
			cout<<count_route<<endl;
		}
return 0;
}
