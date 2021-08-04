#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
using ll = long long;

ll exp(ll n,ll k) {
	if (k==0) return 1;
	if (k == 1) return n;
	ll c= exp(n,k/2)%MOD;
	if (k%2==1) {
		return (c*c%MOD*n)%MOD;
	} else {
		return c*c%MOD;
	}
}

int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
			ll k=0,temp=n;
			while (temp) {
				k=k*10+temp%10;
				temp/=10;
			}
			cout << exp(n,k) << endl;
		

	}
	return 0;
}
