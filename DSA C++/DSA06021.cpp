#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n,x;
		cin >>n >> x;
		vector<pair<int,int>> a;
		int i,temp,count=1;
		for (i=0; i<n; i++) {
			cin >> temp;
			a.push_back(make_pair(temp,i+1) );
		}
		for (auto &i: a) {
			if (i.first == x) {
				cout << i.second << endl;
				break;
			}
		}
	}
	return 0;
}
