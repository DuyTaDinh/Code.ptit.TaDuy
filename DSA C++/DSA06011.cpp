#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n;
		cin >> n;
		int a[n],i,j,x=0,y=1;
		for ( i= 0 ; i< n; i++) {
			cin >> a[i];
		}
		int min = abs(a[0]+a[1]);
		for (i = 0; i<n-1; i++) {
			for ( j= i+1; j<n; j++) {
				if (abs(a[i]+a[j]) < min) {
					min = abs(a[i]+a[j]);
					x = a[i]; y=a[j];
				}
			}	
		}
		cout << x+y << endl;
		
		
	}

	return 0;
}
