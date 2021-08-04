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
		int n;
		cin>>n;
		queue<ll> e;
		e.push(1);
		while(1) {
			ll tmp = e.front();
			e.pop();
			if(tmp%n!=0) {
				tmp*=10;
				e.push(tmp);
				e.push(tmp+1);
			} else {
				cout<<tmp<<endl;
				break;
			}
			
		}

	}
	return 0;
}
