#include <bits/stdc++.h>
using namespace std;

int find(int a[], int b[], int m, int n, int k) 
{
	int  i = 0, j = 0,h=0;
	while(i < m && j < n)
	{
		if(a[i] < b[j]) 
		{
			h++;
			if(k == h)
				return a[i];
			i++;
		} 
		else
		{
			h++;
			if(k == h)
				return b[j];
			j++;
		}
	}
	while(i < m) 
	{
		h++;
		if(k == h)
			return a[i];
		i++;
	}
	while(j < n) 
	{
		h++;
		if(k == h)
			return b[j];
		j++;
	}
	return 0;
} 

int main()
{
	int t;
	cin >> t;
	while ( t--) {
		int m,n,k;
		cin >> m >> n >> k;
		int a[m],b[n],i;
		for (i = 0 ; i< m; i++) {
			cin >> a[i];
		}
		for (i = 0 ; i< n; i++) {
			cin >> b[i];
		}
		cout << find(a, b, m, n, k) << endl;
	}
	return 0;
} 

