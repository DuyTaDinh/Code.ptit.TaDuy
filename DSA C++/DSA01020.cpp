#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int n = s.length();
		bool check = true;
		for (auto i:s) {
			if (i!='0') check = false;
		}
		if (check == true) {
			for (int i = 0; i<n; i++) {
				cout << "1";
			}
			cout << endl;
		}
		else {
			int i = n-1;
			while(i>=0 && s[i]=='0') {
				s[i]='1';
				i--;
			}
			s[i]='0';
			cout<<s<<endl;
		}

	}
	return 0;
}
