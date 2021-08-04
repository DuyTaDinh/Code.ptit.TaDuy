#include <bits/stdc++.h>
using namespace std;

int n,a[20],i;

void print(int a[],int n) {
	cout << "[";
	for ( i= 0 ; i< n-1; i++) {
		cout << a[i] << " ";
	}
	cout << a[n-1] << "] ";
}
void solve(int a[],int n) {
	if (n < 2) return;
	else {
		int temp[20];
		for ( i=0; i< n-1; i++) {
			temp[i] = a[i] + a[i+1];
		}
		solve(temp,n-1);
		print(temp,n-1);
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (i =0 ; i<n; i++) {
			cin >> a[i];
		}
		solve(a,n);
		print(a,n);
		cout << endl;
	}

	return 0;
}
