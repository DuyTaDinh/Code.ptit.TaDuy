#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll GCD(ll a, ll b){
    if(b==0) return a;
    return GCD(b, a%b);
}

ll LCM(ll a, ll b){
    return (a / GCD(a,b)) * b;
}
int main() {
	int t;
	cin >> t;
	while (t --) {
		long long x,y,z,n,res;
		cin >> x >> y >> z >> n;
		res = LCM(x,y);
		res = LCM(res,z);
		ll p = pow(10, n-1) / res;
		if (pow(10, n -1) == res *p) {
			cout << res*p << endl;
		} else if (res*(p+1) < pow(10,n)) {
			cout << res*(p+1) << endl;
		}else 
			cout << "-1" << endl;
	}
	return 0;
}