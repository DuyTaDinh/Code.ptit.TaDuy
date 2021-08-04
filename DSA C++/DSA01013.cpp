#include <bits/stdc++.h>
using namespace std;
using ll = long long;
string s;
void init() {
	cin >> s;
}
void sol() {
	string temp="";
	temp+=s[0];
	for (size_t i=1; i<s.size(); i++) {
		if (s[i]^temp[i-1]) temp+='1';
		else temp+='0';
	}
	cout << temp;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		init();
		sol();
		cout << endl;
	}
	return 0;
}
