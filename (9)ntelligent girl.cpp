#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	cin>>s;
	//char a='0';
	int l=s.length();
	int dp[l+5];
	memset(dp,0,sizeof(dp));
	if((((int)s[l-1]-48))%2==0){
			//cout<<"inside first if"<<endl;
			dp[l-1]=1;
		}
	else{
			dp[l-1]=0;
			//cout<<"inside first else"<<endl;
		}
	for(int i=l-2;i>=0;i--){
			//cout<<"inside for loop"<<endl;
			if((((int)s[i]-48))%2==0){
					dp[i]=dp[i+1]+1;
					//cout<<"inside for if"<<endl;
				}
			else{
					dp[i]=dp[i+1];
					//cout<<"inside for else"<<endl;
				}
		}
		
	for(int i=0;i<l;i++){
			cout<<dp[i]<<" ";
		}
return 0;
}
