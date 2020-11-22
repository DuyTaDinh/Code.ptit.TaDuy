#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long k,s=0;
		int n,i;
		cin >> n >> k;
		for (int i = 1; i<=n;i++) 
		{
			s=s+i%k;
		}	
		cout << s << endl;
		
	}
	return 0;
}

