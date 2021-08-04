#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int m,n,a[105][105];
void init() {
	cin >> m >> n;
		for (int i = 0; i<m; i++) {
			for (int j = 0; j< n; j++) {
				cin >> a[i][j];
			}
		}
}
int solve(int m,int n) {
	if (m==1||n==1) return 1;
	return solve(m-1,n)+solve(m,n-1);
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		init();
		cout << solve(m,n) << endl;

	}
	return 0;
}
