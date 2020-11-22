#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n],i,j,d,count = 0;
		for ( i= 0 ; i<n; i++) {
			cin >> a[i];
		}
		int min = a[0], max = a[0];
		for ( i= 1; i<n; i++) {
			if (a[i] < min) min = a[i];
			if (a[i] > max) max = a[i];
		}
		d = max - min ;
		vector <int> div;
		for ( i = 1; i*i <= d; i++) {
			if (d%i == 0) {
				div.push_back(i);
				if (i != d/i) {
					div.push_back(d/i);
				}
			}
		}
		for (i = 0 ; i < div.size(); i++) {
			int temp = a[0] % div[i];
			for (j = 1; j< n; j++) {
				if (a[j] % div[i] != temp) {
					break;
				}
			}
			if (j == n) count++;
		}
		cout << count << endl;
	}
	return 0;
}