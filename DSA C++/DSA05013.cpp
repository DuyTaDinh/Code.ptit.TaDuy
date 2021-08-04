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
		ll dp[n+1];
		dp[0]=1;dp[1]=1;
		for(int i=2;i<=n;i++) {
			dp[i]=0;
			for(int j=1;j <= min(i,k);j++)
				dp[i]+=dp[i-j];
				dp[i]%=MOD;
		}
		cout<<dp[n]<<endl;
	}
	return 0;
}
