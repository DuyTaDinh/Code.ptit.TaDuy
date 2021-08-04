#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		int n,i;
		cin >> n;
		ll a[n],b[n],p=0;
		for ( i= 0 ; i< n; i++) {
			cin >> a[i];
		}
		for ( i= 0 ; i< n; i++) {
			cin >> b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		for (i = 0 ; i< n; i++) {
			p+=a[i]*b[n-1-i];
		}
		cout << p << endl;

	}
	return 0;
}
