#include <bits/stdc++.h>
#define pb push_back
using namespace std;
using ll = long long;
vector <int> a[55];
int main() {
		int n,u;
		cin >> n;
		cin.ignore();
		for (int i = 1 ; i<= n; i++) {
			string s;
			getline(cin,s);
			stringstream str(s);
			while(str>>u) a[i].pb(u);
		}
		for (int i = 1; i<= n; i++) {
			for (int j = 0; j < a[i].size(); j++) {
				if (i < a[i][j]) cout << i << " " << a[i][j] << endl;
			}
		}
	return 0;
}

