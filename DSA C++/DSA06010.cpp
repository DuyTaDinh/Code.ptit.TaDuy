#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n;
		cin >> n;
		ll a[n];
		set <ll> b;
		for (int i = 0 ; i< n; i++) {
			cin >> a[i];
		}
		for (int i = 0 ; i< n; i++) {
			int temp = a[i];
			for (;a[i];a[i]/=10) {
				b.insert(a[i]%10);
			}
		}
		for (auto &i : b) {
			cout << i << " ";
		}
		cout << endl;
		
	}
	return 0;
}
