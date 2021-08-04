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
const int N = 1500;
int n, k, a[N], f[N][55];
main() {
	SPEED;
	MULTIPLE_TEST {
		cin>>n>>k;
		FOR(i,1,n) {
			cin>>a[i];
			a[i]%=k;
		}
		FOR(i,0,k-1) f[1][i] = INT_MIN;
		f[1][a[1]] = 1;
		FOR(i,2,n) {
			FOR(j,0,k-1) {
				f[i][j] = max(f[i-1][j], f[i-1][(j-a[i]+k)%k] +1);
			}
		}
		cout<<f[n][0]<<endl;
	}
}
