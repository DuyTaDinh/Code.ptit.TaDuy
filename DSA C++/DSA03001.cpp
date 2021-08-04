#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,dem=0;
		cin >> n;
		int a[]= {1,2,5,10,20,50,100,200,500,1000};
		for (int i = sizeof(a)/sizeof(a[0])-1; i>=0; i--) {
			while (n >=a[i]) {
				dem++;
				n-=a[i];
			}
		}
		cout << dem << endl;

	}
	return 0;
}
