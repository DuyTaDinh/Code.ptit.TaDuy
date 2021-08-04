#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int c, n;
int w[102];
int m[102][25005]; 

int main(){
		cin >> c >> n;
		for(int i = 1; i <= n; i++)	
			cin >> w[i];
		memset(m, 0, sizeof(m));
		
		for(int i = 1; i <= n; i++){
			for(int l = 1; l <= c; l++){
				if(w[i] <= l && (m[i-1][l-w[i]] +w[i]) > m[i-1][l])
					m[i][l] = m[i-1][l-w[i]]+w[i];
				else	
					m[i][l] = m[i-1][l];
			}
		}
		cout << m[n][c];
	return 0;
}



