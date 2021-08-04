#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
int a[102];

int biTonic() {
	int res = 0,i,j;
	int max_i[n],max_d[n];
	for(i=0;i<n;i++){
		max_i[i]=a[i];
		max_d[i]=a[i];
	}
	for(i = 1; i<n ;i++) {
		for(j=0;j<i;j++){
			if(a[j]<a[i]) {
				max_i[i]=max(max_i[i],max_i[j]+a[i]);
			}
		}
	}
	for(i = n-2; i>=0;i--){
		for(j=n-1;j>i;j--) {
			if(a[j]<a[i]) {
				max_d[i]=max(max_d[i],max_d[j]+a[i]);
			}
		}
	}
	for(int i = 0;i<n;i++) {
		res=max(res,max_i[i]+max_d[i]-a[i]);
	}
	return res;
}
int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		cin>>n;
		for(int i = 0; i <n; i++) cin>>a[i];
		cout << biTonic()<<endl;
	}
	return 0;
}
