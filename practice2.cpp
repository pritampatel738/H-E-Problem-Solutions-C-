#include<bits/stdc++.h>
using namespace std;


int main(){

	int n,s;
	cin>>n>>s;
	int arr[n+1];
	vector<int> v;
	for(int i=0;i<n;i++){
			arr[i]=i;
			//cout<<i<<" "<<arr[i]<<endl;
		}
	int ar[n+1];
	ar[0]=arr[0];
	for(int i=1;i<n;i++){
		ar[i]=arr[i]+ar[i-1];
		//cout<<i<<" "<<ar[i]<<endl;
	}
	bool visited[n+1];
	memset(visited,false,sizeof visited);
	while(s--){
			long long a=0;
			int l,r;
			cin>>l>>r;
			for(int i=l;i<=r;i++)
				visited[i]=true;
			a=ar[r]-ar[l]+arr[l];
			
			while(l>=0 ){
					if(!visited[l]){
							a+=arr[l];
							visited[l]=true;
							break;
						}
					l--;
				}
			while(r<n){
					if(!visited[r]){
							a+=arr[r];
							visited[r]=true;
							break;
						}
					r++;
				}
			cout<<a<<endl;
		}
	
	
return 0;
}

/*
10 3
2 4
6 7
9 9

Sample Output 0

15
21
9


10 2
3 3
5 6

9 
19
* */
