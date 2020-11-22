#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	getchar();
	while (t--) {
		string s;
		int count,i,j;
		getline(cin,s);
		count = s.size();
		for (i = 0; i< s.size() -1; i++) {
			for ( j= i+1; j < s.size(); j++) {
				if ( s[i] == s[j]) count++;
			}
		}
		cout << count << endl;
	}
}