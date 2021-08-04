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
		string s;
		cin>>s;
		int n=s.size();
		int a[n+1];
		int p=1;
		s+='I';
		for(int i = 0 ;s[i]; i++) {
			if(s[i]=='I') {
				a[i]=p++;
				for(int j = i - 1; s[j]=='D'; j--) {
					a[j]=p++;
				}
			}
		}
		for(int i = 0 ; i<=n; i++) {
			cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
}
