#include <bits/stdc++.h>
using namespace std;
int c[100000];
bool cmp(int a,int b) {
	return (c[a] >c[b]);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n],i;
		memset(c,0,sizeof(c));
		for (i = 0 ; i< n; i++) {
			cin >> a[i];
			c[a[i]]++;
		}
		sort(a,a+n);
		stable_sort(a,a+n,cmp);
		for ( i= 0 ; i< n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}

	return 0;
}
