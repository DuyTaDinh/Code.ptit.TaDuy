#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n ;
		int a[n],i,check = 0,b[n];
		for (i = 1; i <= n; i++)
		{
			b[i] = i;
		}
		for ( i = 1; i < n; i++)
		{
			cin >> a[i];
			b[a[i]]=0;
		}
		for ( i= 1; i<=n; i++)
		{
			if (b[i] != 0) cout << i << endl;
		}
	}
	return 0;
}
