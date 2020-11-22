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
		int n,i;
		cin >> n;
		int check = 0;
		for (i = 2; i <= n/2; i++)
		{
			if (prime(i) && prime(n-i))
			{
				cout << i << " " << n - i << endl;
				check =1;
				break;
			}
		}
		if (check == 0) cout << "-1" << endl;
	}
	return 0;
}