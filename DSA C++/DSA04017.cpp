#include <bits/stdc++.h>
using namespace std;

int find(int a[], int b[], int n) 
{
	int  i = 0;
	while(i < n)
	{
		if(a[i] != b[i]) 
		{
			return i+1;
		} else i++;
	}
	return n;
} 

int main()
{
	int t;
	cin >> t;
	while ( t--) {
		int n;
		cin >> n;
		int a[n],b[n-1],i;
		for (i = 0 ; i< n; i++) {
			cin >> a[i];
		}
		for (i = 0 ; i< n-1; i++) {
			cin >> b[i];
		}
		cout << find(a, b, n) << endl;
	}
	return 0;
} 

