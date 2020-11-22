#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        int mat[n][m],i,j;
        for(i = 0; i < n; i++) 
            for(j = 0; j < m; j++) 
                cin >> mat[i][j];
        bool row = false, col = false;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j<m; j++)
            {
                if (mat[0][j] == 1) row = true;
                if (mat[i][0] == 1) col = true;
                if (mat[i][j] == 1)
                {
                    mat[0][j] = 1;
                    mat[i][0] = 1;
                }
            }
        }
        for (i = 1; i < n; i++)
        {
            for (j = 1; j<m; j++)
            {
                if (mat[0][j] == 1 || mat[i][0] == 1)
                {
                    mat[i][j] = 1;
                } 
            }
        }
        if (row == true)
        {
            for (j = 0; j< m ; j++)
            {
                mat[0][j] = 1;
            }
        }
        if (col == true)
        {
            for (i = 0; i< n ; i++)
            {
                mat[i][0] = 1;
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j<m; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }

    } 
    return 0;
}
    
