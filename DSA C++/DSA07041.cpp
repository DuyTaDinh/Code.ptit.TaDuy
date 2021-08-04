#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		string s;
		cin >> s;
		stack <char> a;
		int res = 0;
		for (int i = 0; i< s.size(); i++) {
			if (s[i] == '(') {
				a.push(s[i]);
			} else {
				if(!a.empty() && a.top() == '(') {
					res+=2;
					a.pop();
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}
