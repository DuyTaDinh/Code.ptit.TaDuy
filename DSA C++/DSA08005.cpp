#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ll long long
#define pb push_back
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

void solve(string s) {
    queue<string> q;
    q.push("1");
    string s1;
    do {
        s1 = q.front(); q.pop();
        cout << s1 << " ";
        q.push(s1+"0");
        q.push(s1+"1");
    } while(s1!=s);
}
int main() {
	SPEED; int t; cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		while(n) {
			s+=(n%2) +'0';
			n/=2;
		}
		reverse(s.begin(),s.end());
		solve(s);
		cout<<endl;
	}
	return 0;
}