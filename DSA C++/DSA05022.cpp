#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int x,y,z,n;
int dp[105];
int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		cin >>n;
		cin>>x>>y>>z;
		memset(dp,0,sizeof(dp));
		dp[1]=x;
		for(int i = 1;i<=n;i++) {
			if (i&1) {
				dp[i] = min(dp[i-1]+x, dp[(i+1)/2] + z + y);
			} else {
				dp[i] = min(dp[i-1]+x, dp[i/2] + z);
			}
		}
		cout << dp[n]<<endl;
	}
	return 0;
}
