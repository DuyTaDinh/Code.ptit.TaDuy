#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ar array
#define ll long long
#define pb push_back
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

struct capso{
	int fi,se;
};
capso a[105];
int dp[105];
bool cmp(capso x,capso y) {
	return (x.se<y.se);
}

int main() {
	SPEED; int t,n,i,j,res; cin >> t;
	while (t--) {
		cin>>n;
		for(i=0;i<n;i++){
			cin>>a[i].fi>>a[i].se;
		}
		sort(a,a+n,cmp);
		res=0;
		for(i=0;i<n;i++) dp[i]=1;
		for(i=1;i<n;i++) {
			for(j=0;j<i;j++) {
				if(a[j].se<a[i].fi) {
					dp[i]=max(dp[i],dp[j]+1);
				}
			}
			res=max(res,dp[i]);
		}
		cout<<res<<endl;
	}
	return 0;
}