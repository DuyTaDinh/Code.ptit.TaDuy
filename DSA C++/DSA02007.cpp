#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int k,dem;
string s;

int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		cin>> k;
		cin >> s;
		dem=0;
		for (int i=0; i< s.size(); i++) {
			int in = s[s.size()-1];
			int pos = s.size()-1;
			for (int j = s.size()-1; j> i; j--) {
				if (s[j] > in) {
					in = s[j];
					pos = j;
				}
			}
			if (dem < k && s[i] < in) {
				dem++;
				swap(s[i],s[pos]);
			}
		}
		cout << s << endl;
	}
	return 0;
}
