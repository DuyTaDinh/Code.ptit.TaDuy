#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t --)
	{
		int n;
		cin >> n;
		int a[n], i, min1, min2,check = 0;
		for ( i= 0 ; i < n; i++) 
		{
			cin >> a[i];
		}
		min1 = a[0];
		for ( i= 1 ; i < n; i++) 
		{
			if (a[i] < min1) 
			{
				min2 = min1;
				min1 = a[i];
				check = 1;
			}
		}
		if (check ==1) 
		{
			for ( i= 1 ; i < n; i++) 
			{
				if (a[i] < min2 && a[i] != min1) 	
					min2 = a[i];					
			}
			cout << min1  << " "<< min2 << endl; 
		} 
		else 
		{
			cout << "-1" << endl;
		}
		
	}
	
	
	return 0;
}
