#include <bits/stdc++.h>
using namespace std;
using ll= long long;
#define MOD 1000000007
ll dp[1005];

main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		if(k>n) {
			cout<<"0\n";
			continue;
		}		
		dp[0]=1;
		for(int i=1;i<=k;i++) {
			dp[i]=dp[i-1]*(n-i+1);
			dp[i]%=MOD;
		}
		cout<<dp[k]<<endl;
	}
}