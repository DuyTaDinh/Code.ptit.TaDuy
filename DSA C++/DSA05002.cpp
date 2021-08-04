#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin>>n;
		string s;
		cin>>s;
		int dp[n+1][n+1];
		for (int i=0; i<=n; i++)
        	for (int j=0; j<=n; j++)
            	dp[i][j] = 0;
 
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++){
				if (s[i-1]==s[j-1] && i!=j) 
					dp[i][j]=1+dp[i-1][j-1];
				else 
					dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
		}
		cout<<dp[n][n]<<endl;
	}
	return 0;
}
