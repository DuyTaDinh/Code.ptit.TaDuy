#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n;
		cin >> n;
		int a[n+1],i;
		for ( i= 1 ; i<= n; i++) {
			cin >> a[i];
		}
		i = n-1;
		while (i>=1 && a[i] > a[i+1]) i--;
		if ( i== 0) {
			for ( i= 1; i<= n; i++) {
				a[i] = i;
			}
		} else {
			int t,j=n;
			while (a[j] < a[i]) j--;
			t = a[i];a[i] = a[j]; a[j] = t;
			int l = i+1,r=n;
			while (l<n) {
				t=a[l];
				a[l]=a[r];
				a[r]=t;
				l++;r--;
			}
		}
		for ( i= 1; i<=n; i++ ) {
			cout << a[i] << " ";
		}
		cout << endl;
	}

	return 0;
}
