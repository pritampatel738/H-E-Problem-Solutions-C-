#include<bits/stdc++.h>
using namespace std;
pair<int,pair<int,int> > p[100005];
bool visited[100005];
int count_route=0;
int n;
void dfs(int s){
		count_route+=cost;
		visited[s]=true;
		
		for(int i=1;i<=n;i++){
				x=
			}
	}
int main(){
	

	int t;
	cin>>t;
	while(t--){
			
			cin>>n;
			int arr[n];
			for(int i=1;i<=n;i++)
				cin>>arr[i];
			n=n-1;
			//int i=1;
			for(int i=1;i<=n;i++){
				int s,d;
				cin>>s>>d;
					p[i]=make_pair(arr[i],make_pair(s,d));
				}
			memset(visited,false,sizeof visited);
			for(int i=1;i<=n;i++){
					if(!visited[i]){
							count_route=0;
							dfs(i);
							cout<<count_route<<" ";
						}
				}
			cout<<endl;
		}

return 0;
}
