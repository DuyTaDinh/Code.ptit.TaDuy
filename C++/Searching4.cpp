#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- ) {
		int n,x;
		cin >> n >> x;
		int a[n],i,result;
		for (i = 0;  i< n; i++)
		{
			cin >> a[i];
		}
		for (i = 0;  i< n; i++)
		{
			if ( x == a[i]) 
			{
				result = i + 1;
				break;
			}
		}
		cout << result << endl;
	}
	return 0;
}
