#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n,k;
		cin >> n >> k;
		int a[k+1],i,j;
		for ( i = 1; i<= k; i++) 
			cin >> a[i];
		
		if (a[k] == k) {
			for ( i= 1; i<= k; i++) {
				a[i] = n-k+i;
			}
		} else {
			i = k;
			while (i>0 && a[i]==a[i-1]+1) i--;
			a[i]--;
			for (j=i+1; j<=k; j++) 
				a[j]=n-k+j;
		}
		for ( i=1; i<=k; i++) {
			cout << a[i]<< " ";
		}
		cout << endl;
	}

	return 0;
}
