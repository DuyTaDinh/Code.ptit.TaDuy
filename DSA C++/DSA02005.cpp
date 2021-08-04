#include <bits/stdc++.h>
using namespace std;
string s;
int a[20];
bool check[20];
void solve(int i) {
	for ( int j= 0; j<s.size(); j++) {
		if (!check[j]) {
			a[i] = j;
			check[j]=true;
			if (i==s.size()) {
				for (int k = 1; k<=s.size(); k++) 
					cout << s[a[k]];
				cout << " ";
			}
			else solve(i+1);
			check[j]=false;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> s;
		sort(s.begin(),s.end());
		solve(1);
		cout << endl;
	}
	return 0;
}
