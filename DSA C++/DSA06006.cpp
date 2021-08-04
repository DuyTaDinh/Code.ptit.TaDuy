#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--)  {
		int n,i,j;
		cin >> n;
		map <int , int > a;
		while ( n--) {
			cin >> i;
			a[i]++;
		}
		for (auto i: a) {
			for (j=0;j<i.second;j++) {
				cout << i.first << " ";
			}
		}
		cout << endl;
	}

	return 0;
}
