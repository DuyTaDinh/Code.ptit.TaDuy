#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
using ll = long long;

int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		
		int n;
		cin >> n;
		int a[n];
		ll sum = 0;
		for (int i = 0 ; i<n ;i++ ) {
			cin >> a[i];
		}
		sort(a,a+n);
		for (int i = 0 ; i< n; i++) {
			sum=(sum+a[i]*i)%MOD;
		}
		cout << sum << endl;

	}
	return 0;
}
