#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define SPEED() ios_base::sync_with_stdio(0); cin.tie(); cout.tie()
const ll Mod = 1e9+7;

ll count(ll x, ll b[], ll m, ll Num[]){
	if(x == 0) return 0;
	else if(x == 1) return Num[0];
	else{
		ll* idx = upper_bound(b,b+m, x);
		ll ans = (b + m) - idx;
		ans += (Num[0] + Num[1]);
		if(x == 2) ans -= (Num[3] + Num[4]);
		if(x == 3) ans += Num[2];
		return ans;
	}
}

void solve(){
	ll n, m, ans = 0;
	cin >> n >> m;
	ll a[n], b[m];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];
	ll Num[5] = {0}; // to caculate special situations < 5;
	for(int i = 0; i < m; i++){
		if(b[i] < 5) Num[b[i]]++;
	}
	sort(b,b+m);
	for(int i = 0; i < n; i++){
		ans += count(a[i], b, m, Num);
	}
	cout << ans << endl;
}

int main(){
	SPEED();
	int test = 1;
	cin >> test;
	while(test--){
		solve();
	}
	return 0;
}