#include<bits/stdc++.h>
using namespace std;

int id[1000001];
int arr[1000001],b[1000001];
string st[1000001];

int root(int a){
		while(id[a]!=a){
				id[a]=id[id[a]];
				a=id[a];
			}
		return a;
	}
void union1(int a,int b){
		int root_a=root(a);
		int root_b=root(b);
		
		id[root_a]=id[root_b];
	}
int main(){

	int t;
	cin>>t;
	
	while(t--){
			int n,m;
			cin>>n>>m;
			bool flag=false;
			for(int i=1;i<=n;i++)
				id[i]=i;
			for(int i=1;i<=m;i++){
					cin>>arr[i]>>st[i]>>b[i];
					if(st[i]=="="){
							union1(arr[i],b[i]);
						}
				}
			for(int i=1;i<=m;i++){
				
							if(st[i]== "=")
								continue;
							if(root(arr[i]) == root(b[i]))
								flag=true;
						
					
				}
			if(flag)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		}

return 0;
}
