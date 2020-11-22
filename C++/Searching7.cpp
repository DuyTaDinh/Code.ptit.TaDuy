#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n,k;
		cin >> n >> k;
		int a[n],i,j;
		for ( i = 0 ; i< n; i++) 
		{
			cin >> a[i];
		}
		for ( i= 0; i< n; i++) 
		{
			for ( j= 0; j < n; j++) 
			{
				if (a[i] > a[j]) 
				{
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		for ( i = 0 ; i < k; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
		
	}
	return 0;
}

