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
		int a[n];
		for(auto& i: a) cin>>i;
		priority_queue<int, vector<int>, greater<int>> e(a,a+n);
		ll res=0;
		while(e.size()>1) {
			int x,y;
			x=e.top(); e.pop();
			y=e.top(); e.pop();
			res+=x+y;
			e.push(x+y);
		}
		cout<<res<<endl;
	}
	return 0;
}
