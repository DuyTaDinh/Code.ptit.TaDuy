#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int i,sum1 = 0,sum2 = 0;
		string n;
		cin >> n;
		for ( i= 0 ; i< n.size(); i++) {
			if (i % 2 == 0) sum1 = sum1 + (n[i]-'0');
			else sum2 = sum2 + (n[i] -'0');
		}
		if (abs(sum1-sum2)%11 == 0) {
			cout << "1" << endl;
		}
		else cout << "0" << endl;
	}
	return 0;
}
