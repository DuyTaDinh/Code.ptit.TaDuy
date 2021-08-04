#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int t;
	cin>>t;
	while (t--) {
		int n,s;
		cin>>n>>s;
		int a[n];
		for(auto& i : a)
			cin>>i;
		bool dp[s+1]={false};
		dp[0]=true;
		dp[a[0]]= true;
		for(int i = 1; i<n;i++) {
			for(int j=s; j >=a[i];j--) {
				if(dp[j-a[i]]&&!dp[j]) dp[j]=true;
			}
			if(dp[s]) break;
		}
		(dp[s]) ?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}