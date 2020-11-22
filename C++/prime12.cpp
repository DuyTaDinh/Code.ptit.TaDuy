#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void primeDivisor(int n,int k)
{
	int count = 0;
	while (n%2 == 0) 
	{
		count= count +1;
		if (count == k) 
		{
			cout << 2 << endl;
			return;
		}
		n>>=1;
	}
	for (int i = 3 ; i <= sqrt(n);i = i+2)
	{
		while (n%i == 0 ) {
			count = count +1;
			if (count == k) 
			{
				cout << i << endl;
				return;
			}
			n/=i;
		}
	}
	if (n>2) 
	{
		count = count +1;
		if (count == k) 
			{
				cout << n << endl;
				return;
			}
	}
	cout << -1 << endl;
}
int main() {
	int t;
	cin >>t;
	while (t--)
	{
		int n,k;
		cin >> n >>k;
		primeDivisor(n,k);
	}
	return 0;
}

