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
	SPEED; int t; cin >> t;
	while (t--) {
		int d,s;
		cin>>s>>d;
		int tmp = 0;
		if(s > 9*d ) cout<<-1<<endl;
		else {
			int a[d],sum=0;
			memset(a,0, sizeof(a));
			s-=1;
			RED(i,d-1,0) {
				if(s > 9) {
					s-=9;
					a[i]=9;
				} else {
					a[i]= s;
					s= 0;
				}
			}
			a[0] += 1;
			for(auto& i : a) cout<<i;
			cout<<endl;
		}
	}
	return 0;
}
