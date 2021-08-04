#include <bits/stdc++.h>
#define ll long long
using namespace std;
int t, n, m;
int a[1001][1001];

int main(){
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++)	{
				cin >> a[i][j];
			}
		}
		for(int i = 2; i <= m; i++){
			a[1][i] += a[1][i-1];
		}
		for(int i = 2; i <= n; i++){
			a[i][1] += a[i-1][1];
		}
		
		for(int i = 2; i <= n; i++){
			for(int j = 2;j <= m; j++){
				a[i][j] = a[i][j] + min(min(a[i][j-1], a[i-1][j]),a[i-1][j-1]);
			}
		}
		cout << a[n][m] << endl;
	}
	return 0;
}



