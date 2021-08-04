#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		string s;
		int d;
		cin >> d;
		cin >> s;
		int k = s.size();
		int Max=0,b[200] = {0};
		for (int i = 0 ; i< k; i++) {
			b[s[i]-'0']++;
			if (b[s[i]-'0'] > Max) Max= b[s[i]-'0'];
		}
		if ((Max-1)*d < k) cout << "1" << endl;
		else cout << "-1" << endl;

	}
	return 0;
}
