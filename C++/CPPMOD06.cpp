#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		string a;
		ll b,i, m;
		cin >> a >> b >> m;
		ll mod = 0; 
    	for (i = 0; i < a.length(); i++) 
    	{ 
        	mod = (mod*10 + a[i] - '0') %m ; 
    	} 
    	ll res = 1;
        while (b > 0)
        {
            if (b & 1)
                res = (res*mod) % m;
            b = b>>1;
            mod = (mod*mod) % m;
        }
		cout << res << endl;
	}
	return 0;
}

// (a^b) %M
