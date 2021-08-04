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
		ll dp[n+1];
		dp[1]=1;
		ll i2=1,i3=1,i5=1;
		for(int i=2;i<=n;i++){
			dp[i]=min(dp[i2]*2,min(dp[i3]*3,dp[i5]*5));
			if(dp[i2]*2==dp[i]) i2+=1;
			if(dp[i3]*3==dp[i]) i3+=1;
			if(dp[i5]*5==dp[i]) i5+=1;
		}
		cout<<dp[n]<<endl;
	}
	return 0;
}


