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
		int m,n,a,b;
		cin >> m >> n >> a >> b ;
		int i, count = 0;
		for ( i = m; i <=n; i++)
		{
			if (i % a == 0 || i % b == 0) count++;
		}
		cout << count << endl;
	}
	return 0;
}

