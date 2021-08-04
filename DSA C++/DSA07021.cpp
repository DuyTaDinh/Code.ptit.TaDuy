#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		string s;
		cin >> s;
		stack <int > a;
		a.push(-1);
		int res = 0;
		for (int i = 0; i< s.size(); i++) {
			if (s[i] == '(') {
				a.push(i);
			} else {
				a.pop();
				if (!a.empty()) {
					res = max(res,i-a.top());
				}
				else a.push(i);
			}
		}
		cout << res << endl;
	}
	return 0;
}