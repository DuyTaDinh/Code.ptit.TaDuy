#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,X;
		cin >> n >> X;
		int a[n],i,check = 0;
		for ( i = 1; i <= n; i++)
		{
			cin >> a[i];
			if ( X == a[i]) 
			{
				cout << "1" << endl;
				check = 1;
			}
		}
		if (check == 0) cout << "-1" << endl;
	}
	return 0;
}
