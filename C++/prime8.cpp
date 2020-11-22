#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
	if ( n < 2) return false;
	for ( int i  = 2; i <= sqrt(n); i++)
	{
		if ( n%i ==0 ) return false;
	}
	return true;
}

int main() {
	int t;
	cin >> t;
	while ( t--) 
	{
		int n,p;
		cin >> n >> p;
		int i,count = 0;
		for (i = 1; i<=n; i++)
		{
			int temp=i;
			while ( temp % p == 0) 
			{
				count++;
				temp= temp / p;
			}
		}
		cout << count << endl;
	}
	return 0;
}

