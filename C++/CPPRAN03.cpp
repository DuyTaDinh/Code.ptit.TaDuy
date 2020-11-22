#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool prime(int n)
{
    if (n < 2) return false;
    for ( int i = 2; i<= sqrt(n); i++)
    {
        if ( n %i == 0) return false;
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r,i, count = 0;
        cin >> l >> r;
        for ( i= l ; i <=r ; i++)
        {
            if (prime(i) == true) count++;
        }
        cout << count << endl;
    }
    return 0;
}
