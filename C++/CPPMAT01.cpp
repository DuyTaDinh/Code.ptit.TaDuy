#include <bits/stdc++.h>

using namespace std;
void rotatematrix(int m, int n, int mat[R][C]) 
{ 
    int row = 0, col = 0; 
    int prev, curr; 
    while (row < m && col < n) 
    { 
        if (row + 1 == m || col + 1 == n) 
            break; 
        prev = mat[row + 1][col]; 
        for (int i = col; i < n; i++) 
        { 
            curr = mat[row][i]; 
            mat[row][i] = prev; 
            prev = curr; 
        } 
        row++; 
        for (int i = row; i < m; i++) 
        { 
            curr = mat[i][n-1]; 
            mat[i][n-1] = prev; 
            prev = curr; 
        } 
        n--; 
        if (row < m) 
        { 
            for (int i = n-1; i >= col; i--) 
            { 
                curr = mat[m-1][i]; 
                mat[m-1][i] = prev; 
                prev = curr; 
            } 
        } 
        m--; 
        if (col < n) 
        { 
            for (int i = m-1; i >= row; i--) 
            { 
                curr = mat[i][col]; 
                mat[i][col] = prev; 
                prev = curr; 
            } 
        } 
        col++; 
    } 
    for (int i=0; i<R; i++) 
        for (int j=0; j<C; j++) 
          cout << mat[i][j] << " "; 
} 
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
        rotatematrix(R, C, a); 
    } 
    return 0;
}
    
