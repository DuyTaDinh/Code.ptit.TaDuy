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
		int a[n];
		for(auto &i: a) cin>>i;
		int dem=0;
		for(int i = 0; i<n-1; i++) {
			int x = i;
			for(int j = i+1; j<n; j++) {
				if (a[j] < a[x]) x=j;
			}
			if (x!= i) {
				swap(a[x],a[i]);
				dem++;
			}
		}
		cout<<dem<<endl;

	}
	return 0;
}
