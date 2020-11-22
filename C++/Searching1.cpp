#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n,i,X,check = 0;
        cin >> n >> X;
        int a[n+1];
        for ( i= 1; i<= n; i++)
        {
            cin >> a[i];
        }
        for ( i= 1; i <= n; i++)
        {
            if (a[i] == X) {
                cout << i << endl;
                check = 1;
                break;
            }
        }
        if (check == 0) cout << "-1" << endl;
    }
    return 0;
}
