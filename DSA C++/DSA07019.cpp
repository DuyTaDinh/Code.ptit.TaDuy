#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define pb push_back
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

int main() {
	SPEED; int t; cin >> t;
	while (t--) {
		int n;
		cin>>n;
		ll a[n+1];
		for(int i =0;i<n; i++) cin>>a[i];
		int i = 0;
		ll res=0,Max,temp;
		stack<ll> s;
		while(i<n) {
			if(s.empty() || a[s.top()] <= a[i]) {
				s.push(i++);
			}
			else {
				temp = s.top(); s.pop();
				if (s.empty()) {
					Max=a[temp]*i;
				} else 
					Max=a[temp]*(i-1-s.top());
				if (res< Max) res=Max;
			}
		}
		while(s.empty()==false) {
			temp = s.top(); s.pop();
			if (s.empty()) 
				Max=a[temp]*i;
			else 
				Max=a[temp]*(i-1-s.top());
			if (res< Max) res=Max;
		}
		cout<<res<<endl;
	}
	return 0;
}
