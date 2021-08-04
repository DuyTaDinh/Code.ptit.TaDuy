#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(x,a,b) for (int x=a;x<=b;x++)
#define RED(x,a,b) for (int x=a;x>=b;x--)
#define ll long long
#define pb push_back
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

int main() {
	SPEED; 
		int n;
		cin>>n;
		int a[n+1];
		vector<int> u,v;
		for(int i = 1; i<= n; i++) {
			cin>>a[i];
			(i&1) ? u.pb(a[i]) :	v.pb(a[i]);
		}
		sort(u.begin(), u.end()); 
		sort(v.begin(), v.end(), greater<int>()); 
		int d1=0,d2=0;
		for(int i = 1; i<=n; i++) {
			(i&1) ?	cout<<u[d1++]<<" ": cout<<v[d2++]<<" ";
		}
		
	return 0;
}
