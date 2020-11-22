#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
	if ( n < 2) return false;
	for ( int i = 2; i<=sqrt(n); i++)
	{
		if ( n% i == 0) return false;
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
		cout << "1 ";
		for ( int i =2; i<=n; i++)
		{
			if (i%2 == 0) cout << "2 ";
			else if (prime(i) == true)
			{
				cout << i << " ";
			}
			else
			{
				for (int j =3; i<=n; j= j+2)
				{
					if (prime(j) == true && i%j == 0)
					{
						cout << j << " ";
						break;
					}
				}
			}
		}
		cout << endl;
	}
	return 0;
}


