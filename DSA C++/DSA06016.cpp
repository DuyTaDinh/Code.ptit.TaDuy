#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,m;
		cin >> n >> m;
		int a[n],b[m],i;
		long long max = -10e6, min = 10e6;
		for ( i= 0; i<n; i++) {
			cin >> a[i];
			if (a[i] > max) max = a[i];
		}
		for ( i = 0 ; i<m; i++) {
			cin >> b[i];
			if (b[i] < min) min = b[i];
		}
		cout << max*min << endl;
	}

	return 0;
}
