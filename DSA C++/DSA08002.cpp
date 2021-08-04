#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ll long long
#define pb push_back
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

int main() {
	SPEED; int t;string s; queue<int> qe; cin >> t;
	while (t--) {
		cin>>s;
		if (s == "POP" && qe.size() != 0) qe.pop();
		else if ( s == "PUSH") {
			int x;
			cin>>x;
			qe.push(x);
		} else if (s == "PRINTFRONT" ) (qe.size()) ? cout<<qe.front()<<endl : cout<< "NONE\n";

	}
	return 0;
}
