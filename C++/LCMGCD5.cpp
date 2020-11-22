#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b) {
	if ( b== 0) return a;
	return GCD(b, a%b);
}
void solve( int a, int x, int y) {
	int gcd = GCD(x,y);
	for (int i = 0 ; i< gcd; i++) {
		cout << a;
	}
	cout << endl;
}
int main() {
	int t;
	cin >> t;
	while (t --) {
		int a, x, y;
		cin >> a >> x >> y;
		solve(a,x,y);
	}
	return 0;
}