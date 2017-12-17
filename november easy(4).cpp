#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int n;
void func(int la,int r){
	
		int l=v.size();
		if(l==1){
				cout<<1<<endl;
				return;
			}
			
			
		for(int i=la;i<r;i++){
			
				for(int j=i;j<r;j++){
					
						for(int k=i;k<=j;k++){
							
								cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
							}
					}
			}
	}

int main(){
	
	
	
	cin>>n;
	
	while(n--){
		
			int e,l,r;
			cin>>e>>l>>r;
			
			v.push_back(e);
			func(l,r);
		}
	
return 0;
}

/*
 * void subArray(int arr[], int n)
{
    // Pick starting point
    for (int i=0; i <n; i++)
    {
        // Pick ending point
        for (int j=i; j<n; j++)
        {
            // Print subarray between current starting
            // and ending points
            for (int k=i; k<=j; k++)
                cout << arr[k] << " ";
 
            cout << endl;
        }
    }
}
* */
