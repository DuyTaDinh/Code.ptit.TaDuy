#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) 
	{
		int i,n,temp = 0;
		cin >> n;
		long long str[n],a[n];
		for(i = 0; i<n; i++)
		{
			cin >> a[i];
		}
		for(i = 0; i<n; i++)
		{
			str[i] = i;
		}
		for (i = 0 ; i <n; i++)
		{
			temp = 0;
			for(int j = 0 ; j < n; j++) 
			{
				if (a[j]== i) {
					temp = 1;
					break;
				} 
			}
			if (temp == 0) str[i]=-1;
		}
		for(i = 0; i<n; i++)
		{
			cout << str[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

