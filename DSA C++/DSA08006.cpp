#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ll long long
#define pb push_back
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

int main() {
	SPEED; int t; cin >> t;
	while (t--) {
		ll n,res;
		cin>>n;
		queue<int> e;
		e.push(9);
		while(1) {
			ll p = e.front();
			if (p%n==0) {
				cout<<p<<endl;
				break;
			}
			e.pop();
			e.push(p*10);
			e.push(p*10+9);
		}	

	}
	return 0;
}
