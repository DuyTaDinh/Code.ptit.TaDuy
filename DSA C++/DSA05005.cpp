#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin>>n;
		int a[n];
		for(auto&i : a) cin>>i;
		int f[n+1];
		f[0]=1;
		int res=1;
		for(int i=1;i<n;i++){
			f[i]=1;
			for(int j=0;j<i;j++) {
				if (a[i]>=a[j]) f[i]=max(f[i],f[j]+1);
			}
			res=max(res,f[i]);
		}
		cout <<n-res<<endl;
	}
	return 0;
}