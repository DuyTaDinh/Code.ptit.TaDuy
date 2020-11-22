#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	getchar();
	while (t--) {
		string s;
		int check,i,j;
		getline(cin,s);
		for (i = 0 ; i< s.size(); i++) {
			check = 1;
			for (j = i+1; j< s.size(); j++) {
				if (s[i] == s[j]) {
					check = 0;
					s[j] = '$';
				}
			}
			if (!check) s[i] = '$';
		}
		for (i = 0; i<s.size(); i++) {
			if (s[i] != '$') cout << s[i];
		}
		cout << endl;
	}
	return 0;
}