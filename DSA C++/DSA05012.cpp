#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007
int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		int k,n;
		cin>>n>>k;
		ll dp[k+1];
		memset(dp,0,sizeof(dp));
		dp[0]=1;
		for(int i = 1;i<=n;i++) {
			for(int j=min(i,k);j>0;j--) 
				dp[j]=(dp[j]+dp[j-1])%MOD;
		}
		cout<<dp[k]<<endl;;
	}
	return 0;
}
