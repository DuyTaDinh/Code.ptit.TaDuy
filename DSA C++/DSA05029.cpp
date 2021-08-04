#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin>>s;
		int n=s.size(),i;
		int dp[45]={0};
		if(s[0]=='0') {
			cout<<"0\n";
			continue;
		}
		dp[0]=1;dp[1]=1;
		for(i=2;i<=n;i++) {
			if(s[i-1]!='0') dp[i]=dp[i-1];
			if(s[i-2]=='1' || (s[i-2]=='2'&&s[i-1]<'7'))
				dp[i]+=dp[i-2];
		}
		cout<<dp[n]<<endl;

	}
	return 0;
}
