#include <bits/stdc++.h>
using namespace std;
int OK, n,k, j,i,a[20];

void print() {
	for ( i= 1; i<=k; i++) {
		cout << a[i];
	}
	cout << " ";
}

void nextCombination() {
	i = k;
	while (a[i] == n+i-k) i--;
	if (a[1] == n+1-k && a[n] == 2*n - k) OK = 1;
	if (i == 0 ) {
		OK = 1;
	} else {
		a[i]++;
		for ( j = i +1; j <= k; j++) {
			a[j] = a[j-1] + 1;
		}
	}
}
int main() {
	int t;
	cin >> t;
	while ( t--) {
		OK = 0;
		cin >>n >> k;
		for ( i = 1; i<= k; i++) {
			a[i] = i;
		}
		
		while (!OK) {
			print();
			nextCombination();
		}
		cout << endl;
	}
	return 0;
}