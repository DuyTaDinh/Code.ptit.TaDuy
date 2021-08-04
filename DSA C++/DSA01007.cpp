#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n;
		cin >> n;
		int i,j;
		char a[n+1];
		for (i=1; i<=n; i++) {
			a[i] = 'A';
		}
		bool OK = false;
		while (!OK) {
			for (i = 1;i<=n; i++) {
				cout << a[i];
			}
			cout << " ";
			i = n;
			while (a[i] == 'B') {
				a[i--] = 'A';
			}
			if (i==0) OK = true;
			else {
				a[i] = 'B';
			}
		}
		cout << endl;
	}

	return 0;
}
