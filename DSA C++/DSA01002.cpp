#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n,k;
		cin >> n >> k;
		int a[k+1],i,j;
		for ( i= 1;  i<= k; i++) {
			cin >> a[i];
		}
		i = k;
		while (a[i] == n-k+i) i--;
		if ( i== 0) {
			for ( j= 1; j<= k; j++) {
				a[j]=j;
			}
		} else {
			a[i]+=1;
			for (j = i+1;j<=k;j++) {
				a[j]=a[j-1]+1;
			}
		}
		for ( i= 1; i<= k; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}

	return 0;
}
