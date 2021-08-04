#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n,k,i,j;
		cin >> n >> k;
		int a[n];
		for (auto &i : a) {
			cin >> i;
		}
		sort(a,a+n,greater<int>());
		for ( i = 0 ; i< k; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}

	return 0;
}
