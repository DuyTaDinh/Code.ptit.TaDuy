#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ll long long
#define pb push_back
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

struct work{
	int st;
	int fn;
};
bool cmp(work a1, work a2) {
	return (a1.fn < a2.fn);
}
int main() {
	SPEED; int t; cin >> t;
	while (t--) {
		int n;
		cin>>n;
		work a[1000];
		for(int i  = 0 ; i< n; i++) cin>>a[i].st;
		for(int i  = 0 ; i< n; i++) cin>>a[i].fn;
		sort(a,a+n,cmp);
		int dem = 1,tmp=0;
		for(int i = 1; i< n; i++) {
			if(a[i].st >= a[tmp].fn) {
				dem++; tmp = i;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
