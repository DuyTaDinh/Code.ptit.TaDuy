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
		int temp=n;
		for (int i = 0 ; i< n; i++) {
			 cin >> a[i];
		}
		sort(a,a+n);
		ll sum1=0,sum2=0;
		if (n&1) n-=1;
		for(int i=0; i<n ;i++) {
			if (i&1) {
				sum1=sum1*10+a[i];
			} else {
				sum2=sum2*10+a[i];
			}
		}
		if (temp&1) {
			if (sum1>=sum2) sum2=sum2*10+a[temp-1];
			else sum1=sum1*10+a[temp-1];
		}
		cout << sum1+sum2 << endl;
	}
	return 0;
}
