#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int d[505][505],n,m;
int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		cin>>n>>m;
		int res=0;
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				cin>>d[i][j];
				if(d[i][j]==1) res=1;
			}
		}
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				if(d[i-1][j] >= 1 && d[i-1][j-1] >= 1 && d[i][j-1] >= 1 && d[i][j] == 1){
					d[i][j] = min(min(d[i-1][j], d[i-1][j-1]), d[i][j-1])+1;
					res = max(res, d[i][j]);
				}
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
