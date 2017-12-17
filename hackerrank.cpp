#include <bits/stdc++.h>
using namespace std;
int prime[10000000];
//vector<int> primes;
void sieve()
{
 //cout<<"inside sieve"<<endl;
    for (int p=2; p*p<=1000007; p++)
    {
        if (prime[p])
        {
            for (int i=p*2; i<=1000007; i += p){
                prime[i] = false;
                
			}
		//cout<<"pushing the value"<<endl;
		//primes.push_back(p);
        }
    }
          
}
int main()
{
	memset(prime, true, sizeof(prime));
    sieve();
    int q;
    cin>>q;
    while(q--){
			int s,e;
			cin>>s>>e;
			int p1=0,p2=0;
			for(int i=s;i<=e;i++){
					if(prime[i]){
							p1=i;
							//flag1=false;
						}
				}
			for(int i=e;i>=s;i--){
					if(prime[i]){
							p2=i;
						}
				}
			cout<<abs(p2-p1)<<endl;
		}
    return 0;
}
