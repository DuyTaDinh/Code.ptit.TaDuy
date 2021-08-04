#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
using ll = long long ;

ll exp(ll n, ll k) {
	if (k == 0) return 1;
	if (k%2==0) {
		ll c = exp(n,k/2);
		return (c*c)%MOD;
	} else {
		ll c = exp(n,k-1);
		return (c*n)%MOD;
	}
}

int main() {
	int t;
	cin >> t;
	while ( t--) {
		ll n , k;
		cin >> n >> k;
		cout << exp(n,k) << endl;
	}

	return 0;
}
