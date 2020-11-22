#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) 
	{
		int i,n,j=0;
		cin >> n;
		long long str[n],a[n];
		for(i = 0; i<n; i++)
		{
			cin >> a[i];
		}
		for(i = 0; i<n; i++)
		{
			if (a[i] != 0) 
			{
				str[j] = a[i];
				j++;
			}
		}
		for (i = j; i<n; i++) 
		{
			str[i] = 0;
		}
		for(i = 0; i<n; i++)
		{
			cout << str[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

