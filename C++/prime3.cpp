#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool prime(int n) 
{
	for (int i = 2; i <= sqrt(n); i++) 
	{
		if (n%i == 0) return false;
	}
	return true;
}
int main() {
	int t;
	cin >> t;
	while (t--) 
	{
		int n,i;
		cin >> n;
		for (i = 2; i <= n; i++) 
		{
			if (prime(i) == true) cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}

