#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n ;
		cin >> n;
		int a[n],b[n],i=0,j=n;
		while (j--) {
			cin >> a[i++];
			b[i-1] = a[i-1];
		}
		sort (a,a+n);
		for (i = 0 ; i< n;i ++) {
			if (a[i] != b[i]) {
				cout << i+1 << " ";
				break;
			}
		}
		for (i = n-1 ; i>=0;i--) {
			if (a[i] != b[i]) {
				cout << i+1 ;
				break;
			}
		}
		cout << endl;

	}
	return 0;
}
