#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n ,x;
		cin >> n >> x;
		int a[n],i,j,temp;
		for ( i= 0 ; i<n; i++) {
			cin >> a[i];
		}
		for ( i= 1 ; i<n; i++) {
			int temp = abs(a[i]-x);
			j = i-1;
			if (abs(a[j] - x) > temp) {
				int temp1 = a[i];
				while (abs(a[j] - x) > temp && j >= 0) { 
                	a[j + 1] = a[j]; 
                	j--; 
            	} 
            	a[j + 1] = temp1;
			}
		}
		for ( i= 0 ; i<n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}

	return 0;
}
