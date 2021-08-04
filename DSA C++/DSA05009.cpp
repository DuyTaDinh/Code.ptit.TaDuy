#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n;
		cin >> n;
		int a[n],i,sum=0;	;
		for ( i= 0 ; i< n; i++) {
			cin >> a[i];
			sum+=a[i];
		}
		if (sum&1) cout <<"NO" << endl;
		else {
			bool dp[sum/2+1];
			for ( i= 0 ; i< n; i++) {
				dp[i] = 0;
			}
			for ( i= 0 ; i< n; i++) {
				for ( int j= sum/2;  j>=a[i]; j--) {
					if (dp[j-a[i]] == 1 || j == a[i]) dp[j]=1;
				}
			}
			if (dp[sum/2]) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}

	return 0;
}
