#include<bits/stdc++.h>
using namespace std;
bool arr[10000][10000];
int ar[10000];

int main(){

	int n,m;
	//cout<<"enter n and m"<<endl;
	cin>>n>>m;
	memset(ar,0,sizeof ar);
	memset(arr,false,sizeof arr);
	for(int i=0;i<m;i++){
			int a,b;
			//cout<<"input other values"<<endl;
			cin>>a>>b;
			arr[a][b]=true;
			arr[b][a]=true;
			//cout<<"the value of a and b is"<<a<<" "<<b<<" "<<arr[a][b]<<endl;
			ar[a]++;
			//cout<<"the value of "<<ar[a] <<endl;
			ar[b]++;
		}
	int ans=INT_MAX;
	
	for(int i=1;i<=n;i++){
		//cout<<"inside i loop"<<endl;
			for(int j=i+1;j<=n;j++){
				//cout<<"inside j loop"<<endl;
					if(arr[i][j]){
							for(int k=j+1;k<=n;k++){
									//cout<<"inside k loop"<<endl;
									//cout<<"the value of i , j and k is "<<i<<" "<<j<<" "<<k<<endl;
									//cout<<"the value of arr[j][k] is "<<arr[j][k]<<endl;
									//cout<<"the value of arr[k][i] is "<<arr[k][j]<<endl;
									
									if(arr[j][k] && arr[k][i]){
											//cout<<"inside ans"<<endl;
											int x=ar[i]+ar[j]+ar[k];
											if(ans>x)
												ans=x;
												
										}
								}
						}
				}
		}
	if(ans>100000)
		cout<<-1;
	else
		cout<<ans-6;
	
return 0;
}
