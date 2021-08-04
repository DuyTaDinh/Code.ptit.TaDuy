#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		bool check = false;
		for ( int i = 0 ; i< n; i++) {
			cin >> a[i];
			if (a[i] >0) check= true;
		}
		int sum = 0,Max=-999999;
		if (check) {
			for (int i = 0; i< n; i++) {
				sum+=a[i];
				if (sum > Max) Max = sum;
				if (sum < 0) sum =0 ;
			}
		} 
		cout << Max << endl;
	}
	return 0;
}
