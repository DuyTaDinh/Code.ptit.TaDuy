#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		int n,v;
		cin>>n>>v;
		int a[n],c[n];
		for(auto &i:a) cin>>i;
		for(auto &i:c) cin>>i;
		int dp[n+1][v+1];
		for(int i = 0; i <= n; i++) {
        	for(int w = 0; w <= v; w++){
            	if (i == 0 || w == 0) dp[i][w] = 0;
            	else if (a[i - 1] <= w)
                	dp[i][w] = max(c[i-1]+dp[i-1][w-a[i-1]],dp[i-1][w]);
    			else
					dp[i][w] = dp[i-1][w];
        }
    }
	cout<<dp[n][v]<<endl;
		

	}
	return 0;
}
