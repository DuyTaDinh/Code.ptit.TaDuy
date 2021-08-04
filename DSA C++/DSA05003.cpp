#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		int a,b,c;
		cin >> a >> b >> c;
		string x,y,z;
		cin >> x;
		cin >> y;
		cin >> z;
		int dp[a+1][b+1][c+1];
		for(int i=0;i<=a;i++) {
			for(int j=0;j<=b;j++) {
				for(int k=0;k<=c;k++) {
					if(i==0||j==0||k==0) dp[i][j][k]=0;
					else if(x[i-1]==y[j-1]&& x[i-1]==z[k-1]) 
						dp[i][j][k] = dp[i-1][j-1][k-1]+1;
					else 
						dp[i][j][k]= max(max(dp[i-1][j][k],dp[i][j-1][k]),dp[i][j][k-1]);	
				}
			}	
		}
		cout<<dp[a][b][c]<<endl;
	}
	return 0;
}	