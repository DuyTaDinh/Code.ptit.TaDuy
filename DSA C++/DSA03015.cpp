#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n,s,m;
int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> s >> m;
		if (m > n || s>=7 && n*6<m*7) {
			cout << "-1" << endl;
			continue;
		}
		if ((s*m) %n !=0) {
			cout << s*m/n+1 << endl;
		} else cout << s*m/n << endl;

	}
	return 0;
}
