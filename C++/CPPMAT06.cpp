#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mat[n][n],i,j;
        for (i= 0 ; i< n; i++)
            for (j=0;j<n;j++)
                cin >> mat[i][j];
        for (i= 0 ; i<n; i++)
        {
            for (j= 0 ; j< n; j++)
            {
                if ( i == 0 || j == 0 || i == n-1 || j == n-1)
                {
                    cout << mat[i][j] << " ";
                }
                else 
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}