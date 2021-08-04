#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ar array
#define ll long long
#define pb push_back
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

int priority(char c) {
	if (c=='+'||c=='-') return 1;
	if (c=='*'||c=='/') return 2;
	if (c=='^') return 3;
	return -1;
}
int main() {
	SPEED; int t; cin >> t;
	while (t--) {
		string s;
		cin>>s;
		stack<char> a;
		string res="";
		for(int i = 0 ; s[i]; i++) {
			if (s[i]=='(') 
				a.push(s[i]);
			else if (isalpha(s[i])) 
				cout<< s[i];
			else if (s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'|| s[i] == '^'){
				while(!a.empty() && priority(s[i]) <= priority(a.top())) {
					cout<<a.top();
					a.pop();
				} 
				a.push(s[i]);	
			} else {
				while(!a.empty() && a.top() != '(') {
					cout<<a.top();
					a.pop();
				}
				if(a.top()=='(') a.pop();
			}
		}
		while(!a.empty()) {
			cout<<a.top();
			a.pop();
		}
		cout<<endl;
	}
	return 0;
}
