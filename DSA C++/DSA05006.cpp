#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	iostream::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin>>n;
		int a[n];
		for(auto &i:a) cin>>i;
		int dp[n],Max=0;
		for(int i=0;i<n;i++) 
			dp[i]=a[i];
		for(int i= 1; i<n; i++) 
			for(int j=0; j<i;j++) 
				if(a[i]>a[j])
					dp[i]= max(dp[i],dp[j]+a[i]);
		for(auto&i : dp)
			if(Max<i)
				 Max=i;
		cout<<Max<<endl;
	}
	return 0;
}
		
		