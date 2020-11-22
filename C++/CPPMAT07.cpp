#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mat[n][n],i,j;
        for(i = 0; i < n; i++) 
            for(j = 0; j < n; j++) 
                cin >> mat[i][j];
        for(i = 0; i < n; i++) {
            if(i & 1) { //i%2!=0
                for(j = n-1; j >=0; j--) cout << mat[i][j] << " ";
            } else {
                for(j = 0; j < n; j++) cout << mat[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}