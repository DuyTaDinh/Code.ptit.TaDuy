#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n,s,dem,res;
int a[31];

void Try(int i,int sum,int dem) {
		if(sum > s || dem > res) return;
		if ( i == n) {
			if (sum == s) res = min(dem,res);
			return ;
		}
		Try(i+1,sum,dem);
		Try(i+1,sum+a[i],dem+1);	
}
int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		res = 100;		
		cin >> n >> s;
		for (int i = 0; i<n; i++) 
			cin >> a[i];
		Try(0,0,0);
		if (res == 100) cout << "-1\n";
		else cout << res << endl;
	}
	return 0;
}
