#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ar array
#define ll long long
#define pb push_back
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

int cal(int x,int y,char c) {
	if(c=='*') return x*y;
	if(c=='/') return x/y;
	if(c=='+') return x+y;
	if(c=='-') return x-y;
	return 0;
}
int main() {
	SPEED; int t; cin >> t;
	while (t--) {
		stack <int> a;
		int c1,c2;
		string s;
		cin>>s;
		for(int i = 0 ;s[i]; i++) {
			if (isdigit(s[i])) {
				a.push(s[i]-'0');
			} else {
				c2=a.top();a.pop();
				c1=a.top();a.pop();
				a.push(cal(c1,c2,s[i]));
			}
		}
		cout<<a.top()<<endl;

	}
	return 0;
}
