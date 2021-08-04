#include <bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using ll = long long;
const int MAXN = 1e5 + 5;
const ll MOD = (ll)1e9 + 7;
int n,k;

int main() {
	FastIO;
	int t;
	cin >> t;
	while (t--) {
		cin>>n>>k;
		vector<vector<ll>> dp(n+1,vector<ll>(k+1,0));
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=min(9*i, k);j++) {
				if(i==1) dp[i][j]=1;
				else {
					for(int k=0;k<=9;k++) {
						if (j<k) break;
						dp[i][j]+=dp[i-1][j-k];
						dp[i][j]%=MOD;
					}
				}
			}
		}
		cout<<dp[n][k]<<endl;
	}
	return 0;
}