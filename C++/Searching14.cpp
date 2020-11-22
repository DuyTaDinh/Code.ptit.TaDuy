#include<bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
	int t;
	cin >> t;
	while ( t--) {
		int n;
		cin >> n;
		int a[n],i,j,position = n,check = 0;
		for ( i= 0; i < n; i++) 
		{
			cin >> a[i];
		}
		for ( i = 0; i < n; i++)
		{
			for (j = i+1; j < n; j++)
			{
				if (a[i] == a[j]) 
				{
					if (j < position) {
						position = j;
					}
					check = 1;
					break;
				}
			}
		}
		if (check == 0) cout << "-1" << endl;
		else cout << a[position] << endl;
	}
	return 0;
} 

