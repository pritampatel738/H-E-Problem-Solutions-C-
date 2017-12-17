#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
			int n;
			cin>>n;
			int arr[n+5];
			arr[1]=1;
			arr[1]=2;
			
			for(int i=2;i<=n;i++){
					arr[i]=arr[i-1]+arr[i-2];
				}
			cout<<arr[n]<<endl;
		}
return 0;
}
