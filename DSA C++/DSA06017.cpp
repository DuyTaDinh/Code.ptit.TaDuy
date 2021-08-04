#include <bits/stdc++.h>
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while ( t--) {
		int n,m,i;
		cin >>n >> m;
		vector <int > a;
		while (n--) {
			cin >> i;
			a.push_back(i);
		}
		while (m--) {
			cin >> i;
			a.push_back(i);
		}
		sort(a.begin(),a.end());
		for (auto const&i:a) {
			cout << i << " ";
		}
		cout << endl;
	}

	return 0;
}
