#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int k,i,j,count = 0;
		string s;
		cin >> s >> k;
		for ( i= 0 ; i< s.size(); i++) {
			for (j = i+1 ; j<s.size(); j++) {
				if (s[i] == s[j]) s[j] = ' ';
			}
		}
		for (i= 0 ; i< s.size(); i++) {
			if (s[i] != ' ') count++;
		}
		if (26 - count <=k) {
			cout << "1" << endl;
		}
		else cout << "0" << endl;
	}
	return 0;
}
