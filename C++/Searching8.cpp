#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n,x;
		cin >> n >> x;
		int a[n],i,count = 0;
		for ( i = 0 ; i< n; i++) 
		{
			cin >> a[i];
		}
		for ( i = 0 ; i< n; i++) 
		{
			if (x == a[i]) 
			{
				count++;
			}
		}
		if (count == 0) cout << "-1" << endl;
		else cout << count << endl;
	}
	return 0;
}

