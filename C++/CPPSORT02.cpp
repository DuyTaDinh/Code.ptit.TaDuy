#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- ) {
		int n, x, i,j;
		cin >> n >> x;
		int a[n],b[n];
		for ( i = 0; i< n; i++) {
			cin >> a[i];
			b[i] = abs(x-a[i]);
		}
		for (i = 0;i<n-1;i++) {
			for (j = 0; j+i < n-1; j++) {
				if (b[j] > b[j+1]) {
					swap(a[j],a[j+1]);
					swap(b[j],b[j+1]);
				}
			}
		}
		for (i = 0 ; i<n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
