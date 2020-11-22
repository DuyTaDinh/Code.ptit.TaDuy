#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll mod(ll a,ll b,ll c) { 
    if (a == 0 || b == 0) 
        return 0; 
    if (a == 1) 
        return b; 
    if (b == 1) 
        return a; 
    ll temp = mod(a, b/2, c); 
    if ((b & 1) == 0)  
    { 
        return (temp + temp) % c; 
    }  
    else  
    { 
        return (a%c + (temp+temp)) % c; 
    } 
} 
int main() {
	int t;
	cin >> t;
	while ( t--) {
		ll a,b,i,c;
		cin >> a >> b >> c;
		cout << mod(a,b,c) << endl;
	}
	return 0;
}