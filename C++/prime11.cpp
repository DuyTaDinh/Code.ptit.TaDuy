#include<bits/stdc++.h>
#define long long long
using namespace std;
 
bool isPrime(long n){
    if (n < 2) return false;
    for(long i = 2; i <= sqrt(n); ++i) {
        if (n%i==0)
            return false;
    }
    return true;
}
 
int main(){
    int t;
    cin >>t;
    while (t--) 
	{
        long n;
        cin >> n;
        long i, check = 0;
        for(i = 2; i < 40; ++i) {
            if(isPrime(i) && isPrime(pow(2, i)-1)){ // check (2^i - 1) and i is prime
                if(pow(2, 2*i)-pow(2, i) == 2*n){	//	check 2^i(2^i -1) == n
                    cout << 1 << endl;
                    check = 1;
                    break;
                }
            }
        }
        if(!check) cout << 0 << endl;
    }
    return 0;
}
