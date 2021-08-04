#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		string s1,s2;
		cin >>s1>>s2;
		int m=s1.size(),n=s2.size();
		int L[m+1][n+1];
		for(int i=0; i<=m;i++) {
			for(int j=0;j<=n;j++) {
				if(i==0||j==0) L[i][j]=0;
				else if (s1[i-1]==s2[j-1]) L[i][j]=L[i-1][j-1]+1;
				else L[i][j] = max(L[i-1][j],L[i][j-1]);
			}
		}
		cout << L[m][n]<< endl;

	}
	return 0;
}
