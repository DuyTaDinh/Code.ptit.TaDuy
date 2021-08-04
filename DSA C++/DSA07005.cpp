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
		stack<char> a;
		for(int i = 0 ; s[i]; i++) {
			if (s[i]=='(') {
			    a.push(i);
			} else if (s[i] == ')') {
			    if(s[a.top() -1] == '-') {
			        for(int j = a.top(); j < i ; j++) {
			            if (s[j] == '-') s[j]='+';
			            else if(s[j] == '+') s[j] = '-';
			        }
			    }
			    a.pop();
			}
		}
		for(int i=0;s[i];i++) {
			if(s[i]=='(' || s[i]==')') continue;
			cout<<s[i];
		}
		cout<<endl;

	}
	return 0;
}