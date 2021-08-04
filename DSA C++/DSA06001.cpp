#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n;
		cin >> n;
		int a[n],i,j;
		for ( i= 0 ; i<n ;i++) {
			cin >> a[i];
		}
		sort(a,a+n);
		for (i=n-1,j=0;i>j;i--) {
			cout << a[i] << " " << a[j++] << " ";
		}
		if (n%2==1) cout << n/2+1;
		cout << endl;
	}

	return 0;
}
