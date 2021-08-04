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
		stack<string> a;
		string s,s1,s2;
		cin>>s;
		for(int i =0; s[i]; i++) {
			if (s[i]=='*'||s[i]=='/'||s[i]=='+'||s[i]=='-') {
				s1=a.top();a.pop();
				s2=a.top();a.pop();
				a.push("("+s2+s[i]+s1+")");
			} else {
				a.push(s.substr(i,1));
			}
		}
		cout<<a.top()<<endl;

	}
	return 0;
}
