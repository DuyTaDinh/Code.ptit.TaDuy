#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool prime(ll n){
    if (n == 1) return false;
    for (int i = 2; i <= sqrt(n) ; i++) {
        if( n % i == 0) return false;
    }
    return true; 
}
int main() {
    int t;
    cin >> t;
    while (t--){
        ll l,r,i, count = 0;
        cin >> l >> r;
        for(i = l; i*i <= r; i++) {
            if(prime(i)){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}