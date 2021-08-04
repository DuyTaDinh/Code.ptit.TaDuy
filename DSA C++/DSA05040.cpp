#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define MULTIPLE_TEST int t; cin>>t; while(t--)
#define FOR(x,a,b) for (int x=a;x<=b;x++)
#define FOD(x,a,b) for (int x=a;x>=b;x--)
#define ll long long
#define pb push_back
#define MAX INT_MAX
#define pii pair<int,int>
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

main() {
	SPEED;
	MULTIPLE_TEST {
		int n;
		cin>>n;
		int a[n];
		for(auto&i :a) cin>>i;
		int t[n],g[n];
		int res = 1,dem;
		t[0]=1;
		for(int i = 1; i< n; i++) {
			dem = 1;
			for(int j = i-1; j >=0 ; j--) {
				if (a[j+1] > a[j]) dem++;
				else break;
			}
			t[i]=dem;
		}
		g[n-1]=1;
		for(int i = n-2; i >= 0; i--) {
			dem = 1;
			for(int j = i; j< n -1 ; j++) {
				if (a[j] > a[j+1]) dem++;
				else break;
			}
			g[i]=dem;
		}
		for(int i = 0; i< n; i++) {
			res = max(res, t[i]+g[i]-1);
		}
		cout<<res<<endl;
	}
}