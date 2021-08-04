#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(x,a,b) for (int x=a;x<=b;x++)
#define RED(x,a,b) for (int x=a;x>=b;x--)
#define ll long long
#define pb push_back
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

int n,a[14];

bool check() {
	for(int i = 2; i<= n; i++) {
		if(abs(a[i]-a[i-1]) == 1) return false;
	}
	return true;
}

int main() {
	SPEED; int t; cin >> t;
	while (t--) {
		cin>>n;
		for(int i = 1; i<= n; i++) {
			a[i] = i;
		}
		while(next_permutation(a+1,a+n+1)) {
			if(check()) {
				for(int i = 1; i<= n; i++) cout<<a[i];
				cout<<endl;
			}
		}

	}
	return 0;
}
