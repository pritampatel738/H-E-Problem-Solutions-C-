#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum=0;
int arr[1000000];

int func(int l,int r){
	int val=0;
		for(int i=l;i<=r;i++){
			//val=0;
				for(int j=i;j<=r;j++)
					if(__gcd(arr[i],arr[j])!=1){
						val+=1;
						//cout<<arr[i]<<" "<<arr[j]<<endl;
					}
			}
		//cout<<l<<" "<<r<<" "<<val<<endl;
		return val;
	}

int main(){
//cout<<__gcd(1,1)<<endl;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	
	for(int l=1;l<=n;l++){
			for(int r=1;r<=n;r++){
					sum+=func(l,r);
					//cout<<sum<<endl;
				}
		}
	if(sum>1000000000000000000)
		cout<<-1<<endl;
	else
		cout<<sum<<endl;
return 0;
}
