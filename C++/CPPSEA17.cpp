#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,k,temp,i;
		cin >> n >> k;
		vector<int> v;
		while (n--) {
			cin >> temp;
			v.push_back(temp);
		}
		sort(v.begin(), v.end());
		cout << v.at(k-1) << endl;

	}
	return 0;
}