#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long modulo1(long long x, long long y, long long p)
{
	if(y==0)
    	return 1;
    if(y==1)
    	return x;
    long long halfn=modulo1(x,y/2,p);
    if(y%2==0)
        return ( halfn * halfn ) % p;
    else
        return ( ( ( halfn * halfn ) % p ) * x ) % p;
    
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long x,y,p;
		cin >> x>> y >> p;
		cout << modulo1(x,y,p) << endl;
	}
	return 0;
}

