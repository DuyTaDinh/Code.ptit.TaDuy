#include <bits/stdc++.h>
using namespace std;

bool prime(long long n)
{
	if (n < 2) return false;
	for ( long long i= 2; i<= sqrt(n); i++)
	{
		if (n%i == 0) return false;
	}
	return true;
}
void numbers3Divisors(long long n){
	int count = 0;
    for (long long i = 0; i*i <=n; i++)
    {
    	if (prime(i) == true) count++;
    }
    cout << count << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        numbers3Divisors(n);
    }
    return 0;
}