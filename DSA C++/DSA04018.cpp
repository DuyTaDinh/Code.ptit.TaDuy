#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n;
		cin >> n;
		int i,count=0;
		while (n--) {
			cin >> i;
			if (i==0) count++;
		}
		cout << count << endl;
	}

	return 0;
}
