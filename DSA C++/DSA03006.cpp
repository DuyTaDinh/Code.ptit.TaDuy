#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,k;
		cin >> n ;
		int a[n],i,b[n];
		bool check = true;
		for ( i = 0 ; i< n; i++) {
			cin >> a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		for ( i= 0 ; i<n; i++) {
			if (a[i] != b[i] && a[i] != b[n-1-i]) {
				cout << "No" << endl;
				check=false;
				break;
			}
		}
		if (check) cout <<"Yes" << endl;
		
	}
	return 0;
}
