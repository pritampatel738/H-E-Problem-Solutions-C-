#include <bits/stdc++.h>

using namespace std;

long sumOfGroup(int k) {
    // Return the sum of the elements of the k'th group.
    long a=(k*(k-1))+1;
    long d=2;
    
    long ans=((k)*(2*a+(k-1)*d))/2;
    return ans;
}

int main() {
    int k;
    cin >> k;
    long answer = sumOfGroup(k);
    cout << answer << endl;
    return 0;
}
