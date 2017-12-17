#include<bits/stdc++.h>
using namespace std;
#define x 1000000
int n,q;
int arr[1000000];

void func(int l,int r){
	vector<int> v(100006);
	int count=0;
		for(int i=l;i<=r;i++){
			
				for(int j=l;j<=r;j++){
					//cout<<endl;
					for(int l=0;l<100005;l++)
								v[l]=0;
						for(int k=i;k<=j;k++){
							
								if(binary_search(v.begin(),v.end(),arr[k])){
										//cout<<"inside binary search"<<endl;
										continue;
									}
								else{
										count+=1;
										//cout<<"putting value in the array"<<arr[k]<<" ";
										v.push_back(arr[k]);
										//cout<<arr[k];
									}
							}
					}
			}
		cout<<count<<endl;
	}

int main(){
	
	cin>>n>>q;
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	while(q--){
			int l,r;
			cin>>l>>r;
			func(l,r);
		}
	return 0;
	
}
