#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int floor(ll a[],ll x, int l, int r) {
	if (l>r) return -1;
	if (x>=a[r]) return r;
	int mid = (l+r)/2;
	if (x==a[mid]) return mid; 
	if (x>a[mid] && x < a[mid+1]) return mid;
	if (a[mid] < x) return floor(a,x,mid+1,r);
	return floor(a,x,l,mid-1);
}
int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ll x,a[n];
		cin >> x;
		for (int i = 0 ; i< n; i++) {
			cin >> a[i];
		}
		ll temp = floor(a,x,0,n-1);
		if (temp==-1) cout << "-1" << endl;
		else cout << temp+1 << endl;
	}
	return 0;
}


//int main() {
//	iostream::sync_with_stdio(false);
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//		ll x,a[n];
//		cin >> x;
//		for (int i = 0 ; i< n; i++) {
//			cin >> a[i];
//		}
//		ll temp = 0,p=0;
//		bool check = false;
//		for (int i = 0 ; i< n; i++) {
//			if (a[i] <= x && a[i] >= temp) {
//				temp = a[i];
//				p=i;
//				check = true;
//			}
//		}
//		if (check) cout << p+1 << endl;
//		else cout << "-1" << endl;
//	}
//	return 0;
//}
