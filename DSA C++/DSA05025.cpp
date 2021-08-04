#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		long n;
		cin>>n;
		long dp[n+3];
		dp[0]=1;dp[1]=1;dp[2]=2;
		for (long i=3;i<=n;i++) {
			dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
		}
		cout<<dp[n]<<endl;

	}
	return 0;
}
