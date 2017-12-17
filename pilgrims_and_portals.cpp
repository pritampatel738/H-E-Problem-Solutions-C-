#include<bits/stdc++.h>
using namespace std;


int main(){

	int t;
	cin>>t;
	while(t--){
		
			int m,n,k;
			cin>>n>>m>>k;
			long long arr[105][105];
		    for(int i=0;i<105;i++)
		        for(int j=0;j<105;j++)
		            arr[i][j]=10000000;
			while(m--){
					long long a,b,c;
					cin>>a>>b>>c;
					arr[a][b]=c;
				}
			for(int i=1;i<=n;i++){
					for(int j=1;j<=n;j++){
							cout<<arr[i][j]<<" ";
						}
					cout<<endl;
				}
			//memset(arr,0,sizeof arr);
			long long dist[105][105];
			for(int i=0;i<105;i++)
			    for(int j=0;j<105;j++)
			        dist[i][j]=arr[i][j];
			for(int k=1;k<=n;k++){
					for(int i=1;i<=n;i++){
							for(int j=1;j<=n;j++){
									if(dist[i][j]>(dist[i][k]+dist[k][j])){
										dist[i][j]=dist[i][k]+dist[k][j];
									}
								}
						}
				}
			long long ans=0;
			for(int i=0;i<n;i++){
			    for(int j=0;j<n;j++)
			        cout<<dist[i][j]<<" ";
			       cout<<endl;
			}
			for(int i=1;i<k;i++){
					ans+=arr[i][i+1];
				}
			cout<<ans<<endl;
		}
return 0;
}
