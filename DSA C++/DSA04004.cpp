#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll a[51];
int n;
ll k;
void mid() {
	a[1]=2;
	for (int i =2; i<= 50; i++) {
		a[i]=a[i-1]*2;
	}
}
int solve(int n, ll k) {
	if (n==1) return 1;
	if (k == a[n-1]) return n;
	if (k > a[n-1]) {
		k-=a[n-1];
		return solve(n-1,k);
	} else {
		return solve(n-1,k);
	}
}
int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	mid();
	while (t--) {
		cin >> n >> k;
		cout << solve(n,k) << endl;
	}
	return 0;
}
