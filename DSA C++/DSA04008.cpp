#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod =1e9+7;
unordered_map <ll,ll> f;

ll fib(ll n) {
	if(n<2) return 1;
	if (f.find(n) != f.end()) 
		return f[n];
	f[n] = (fib((n+1)/2)*fib(n/2) + fib((n-1)/2)*fib((n-2)/2)) % mod;
	return f[n];
}
int main() {
	int t;
	cin >> t;
	while ( t--) {
		ll n;
		cin >> n;
		if(n<0) return 0;
		cout << fib(n-1) << "\n";
	}

	return 0;
}

