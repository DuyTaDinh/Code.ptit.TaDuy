#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ar array
#define ll long long
#define pb push_back
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

int main() {
	SPEED; int t; cin >> t;
	while (t--) {
		string s;
		cin>>s;
		stack<char> a;
		for(int i =0; s[i]; i++) {
			if (s[i] == '(') {
				a.push(s[i]);
			} else {
			    if (!a.empty() && a.top() == '(') a.pop();
			    else a.push(s[i]);
			}
		}
		int x = 0,y=0;
		while(!a.empty() ){
		    if (a.top() == '(') x++;
			else y++;
			a.pop();
		}
		cout<<x/2 + y/2 + x%2 + y%2<<endl;
	}
	return 0;
}