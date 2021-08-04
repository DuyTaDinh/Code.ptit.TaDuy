#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n,x;
		cin >> n >> x;
		int a[n],i,j;
		int check = 0;
		for (auto &i : a) {
			cin >> i ;
		}
		for (auto i:a) {
			if (i == x) {
				check = 1;
				break;
			}
		}
		(check == 1) ? cout << "1": cout << "-1";
		cout << endl;
	}

	return 0;
}
