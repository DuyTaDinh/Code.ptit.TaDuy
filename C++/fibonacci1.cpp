#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long fibonacci(long long n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	long long i,f1 = 0, f2 = 1,f;
	for (int i =2 ; i<=n; i++) 
	{
		f = (f1+f2)%1000000007;
		f1 = f2;
		f2 = f;
	}
	return f;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		long long k = 1000000007;
		long long fibon = fibonacci(n);
		cout << fibon << endl;
	}
	return 0;
}

