#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--)
	{
		int n,k;
		cin >> n >> k;
		int a[n],i,countl=0,countr = 0;
		for ( i= 0 ;i <n; i++)
		{
			cin >> a[i];
		}
		for ( i=0; i<n/2; i++)
		{
			if (a[i] > k) countl++;
		}
		for ( i=n/2; i<n;i++)
		{
			if (a[i] >k) countr++;
		}
		cout << countl << countr <<endl;
	}
	return 0;
}


