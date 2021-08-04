#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		string s1,s2;
		cin>>s1;
		cin>>s2;
		int n=s1.size(),m=s2.size();
		int dp[n+1][m+1]={0},i,j;
		for(i=0;i<=n;i++) dp[i][0]=i;
		for(i=0;i<=m;i++) dp[0][i]=i;
		for(i=1;i<=n;i++) {
			for(j=1;j<=m;j++) {
				if(s1[i-1]!=s2[j-1]) {
					dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
				} else 
					dp[i][j]=dp[i-1][j-1];
			}
		}
		cout<<dp[n][m]<<endl;
	}
	return 0;
}