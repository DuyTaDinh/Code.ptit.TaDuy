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
		int n;
		cin >> n;
		int count = 0,i;
		for ( i= 2; i<= n; i++) 
		{
			if ( prime(i) == true && n%i == 0)
			{
				count++;
				n=n/i;
			}
		}
		if ( count == 3 && n == 1) cout << "1" << endl;
		else cout << "0" << endl;
	}
	return 0;
}

