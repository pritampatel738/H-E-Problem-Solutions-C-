#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define a 1000000007
ll fibo[10000000];
ll fact[10000000];
void fib(){
		fibo[0]=fibo[1]=1;
		for(int i=2;i<=2000007;i++)
			fibo[i]=((fibo[i-1]%a)+(fibo[i-2]%a))%a;
		cout<<"first 5 fibonacci values are"<<endl;
		for(int i=1;i<=5;i++)
			cout<<fibo[i]<<" ";
		cout<<endl;
	}
void factt(){
		fact[1]=1;
		for(int i=2;i<=2000007;i++)
			fact[i]=((fact[i-1]%a)*(i%a))%a;
		cout<<"first 5 factorial values are"<<endl;
		for(int i=1;i<=5;i++)
			cout<<fact[i]<<" ";
		cout<<endl;
	}
ll sum=0;

void func(int n,int m,int k){
	ll sum=0;
		for(int i=n;i<=m;i++){
				sum=((sum%a)+((fibo[i]%a)*(fact[i]%a))%a);
				//cout<<i<<" "<<fibo[i]<<" "<<fact[i]<<endl;
				//cout<<sum<<endl;
			}
		cout<<sum/k<<endl;
	}
	
int main(){
	fib();
	factt();
	int t;
	cin>>t;
	while(t--){
			sum=0;
			int n,m,k;
			cin>>n>>m>>k;
			func(n,m,k);
		}

return 0;
}
