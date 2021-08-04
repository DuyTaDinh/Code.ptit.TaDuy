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
		int s,t;
		cin>>s>>t;
		int i,a[20001] ;
		for(i = 0 ; i<= 20000; i++) a[i]= INT_MAX;
		queue<int> e;
		e.push(s);
		a[s]=0;
		while(a[t] == INT_MAX) {
			i = e.front();e.pop();
			if(i-1>0 && a[i-1] == INT_MAX) {
				a[i-1] = a[i] + 1;
				e.push(i-1);
			}
			if(i<10000 && a[i*2] == INT_MAX) {
				a[i*2] = a[i] + 1;
				e.push(i*2);
			}
		}
		cout<<a[t]<<endl;
	}
	return 0;
}
