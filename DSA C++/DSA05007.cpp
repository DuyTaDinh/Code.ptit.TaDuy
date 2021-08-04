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
		int a[n];
		for(auto &i:a ) cin>>i;
		if (n==0) cout<<"0\n";
		if (n==1) cout<<a[0]<<endl;
		if (n==2) cout<<max(a[0],a[1])<<endl;
		int dp[n+1]={0};
		dp[0]=a[0];
		dp[1]=max(a[0],a[1]);
		for(int i=2;i<n;++i) {
			dp[i]=max(dp[i-2]+a[i],dp[i-1]);
		}
		cout<<dp[n-1]<<endl;
	}
	return 0;
}
