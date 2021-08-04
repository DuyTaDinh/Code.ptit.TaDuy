#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m;
ll a[27][27];
int main() {
	ios_base::sync_with_stdio(false);
	for(int i = 0 ; i<26; i++) a[0][i]=1;
	for(int i=0; i<26;i++) a[i][0]=1;
	for(int i = 1 ;i<26; i++) {
		for(int j = 1 ;j<26; j++) {
			a[i][j]=a[i][j-1]+a[i-1][j];
		}
	}
	int t;
	cin>>t;
	while(t--) {
		cin>>n>>m;
		cout<<a[n][m]<<endl;
	}
}