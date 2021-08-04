#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin>>s;
		int n=s.length();
		int res=0;
		for(int i=0;i<n;i++) {
			int l = i, r = i;
			while (l<n && r>=0) {
				if (s[l]==s[r]) {
					res = max(res,l-r+1);
					l++;r--;
				}
				else break;
			}
		}
		for(int i = 0; i < n-1; i++){
			int u=i, v=i+1;
			while(u>=0 && v <n){
				if(s[u] == s[v]){
					res=max(res, v-u+1);
					u--;v++;
				}
				else	break;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
