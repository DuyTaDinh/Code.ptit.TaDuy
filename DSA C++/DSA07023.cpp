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
	cin.ignore();
	while (t--) {
		string s,tmp;
		getline(cin,s);
		stringstream a(s);
		vector<string> b;
		while(a>>tmp) {
			b.pb(tmp);
		}
		for(int i = b.size()-1; i>=0; i--) {
			cout<<b[i]<<" ";
		}
		cout<<endl;

	}
	return 0;
}
