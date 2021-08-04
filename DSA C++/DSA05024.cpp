#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007
int a[1001], dp[1001];
int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		int n,k;
		cin>>n>>k;
		for(int i = 0 ; i< n; i++ ) cin >> a[i];
		memset(dp,0,sizeof(dp));
		dp[0]=1;
		for (int i =1 ; i<= k; i++) {
			for (int j = 0 ; j< n; j++) {
				if (i>= a[j]) {
					dp[i]= (dp[i] + dp[i-a[j]]) % MOD;
				}
			}
		}
		cout << dp[k] << endl;

	}
	return 0;
}
