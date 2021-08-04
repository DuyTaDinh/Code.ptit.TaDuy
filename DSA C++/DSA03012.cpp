#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int k = s.size();
		int d[200]= {0},Max=0,temp;
		for (int i =0 ; i< k; i++) {
			d[s[i]-'0']++;
			if (d[s[i]-'0'] > Max) Max=d[s[i]-'0']; 
		}
		if (k&1) {
			temp=k/2+1;
		} else temp = k/2;
		if (Max > temp) cout << "-1" << endl;
		else cout << "1" << endl;
	}
	return 0;
}
