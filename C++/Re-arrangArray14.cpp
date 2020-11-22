#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) 
	{
		int n,k;
		cin >> k >> n;
		int a[k][n],i,j,str[k*n],temp=0;
		for (i = 0 ; i<k; i++)
		{
			for(j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		for (i = 0 ; i<k; i++)
		{
			for(j = 0; j < n; j++)
			{
				str[temp++]=a[i][j];
			}
		}
		for (int i = 0; i < n*k ; i++)
        	for (int j = i+1; j < n*k; j++)
            	if (str[i] > str[j])
               		swap(str[i], str[j]);
        for (int i = 0; i < n*k; i++)
        {
        	cout << str[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

