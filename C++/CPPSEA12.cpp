#include <bits/stdc++.h>
using namespace std;
 
bool solve(int a[], int n, int x)
{
    sort(a, a + n);
    for (int i = 0 ; i< n; i++) {
        for ( int j = i+1; j <n ; j++) {
            if (a[j] - a[i] == x)
                return true;
            else if (a[j] - a[i] > x)
                break;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while ( t--) {
        int n, x,i,j;
        cin >> n >> x;
        int a[n];
        for ( i= 0 ; i< n; i++) {
            cin >> a[i];
        }
        if (solve(a,n,x)) cout << "1" << endl;
        else cout << "-1" << endl;
    }
    return 0;
}