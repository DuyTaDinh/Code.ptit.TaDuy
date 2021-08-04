#include <bits/stdc++.h>
using namespace std;

int find(int a[],int l,int r, int k) {
	if (l<=r) {
		int mid = l + (r-l)/2;
		if (a[mid] == k)
			return mid+1;
		if (a[mid] > k)
			return find(a,l,mid-1,k);
		return find(a,mid+1,r,k);
	}
	return -1;
}
int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n,k;
		cin >> n >> k;
		int a[n],i;
		for ( i= 0 ; i< n; i++) {
			cin >> a[i];
		}
		int result = find(a,0,n-1,k);
		(result == -1) ? cout << "NO" << endl : cout << result << endl;

	}
	return 0;
}
