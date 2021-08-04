#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k,s,dem;
int a[20];

int check() {
	int sum =0;
	for (int i=1; i<=k; i++) {
		sum+=a[i];
	}
	if (sum==s) return 1;
	return 0;
}
void next(int i) {
	for (int j = a[i-1]+1;j<=n; j++) {
		a[i]=j;
		if (i <k) next(i+1);
		else {
			if (check()) dem++;
		}
	}
}
int main() {
	iostream::sync_with_stdio(false);
	while (true) {
		cin >> n >> k >> s;
		if (n==0&&k==0&&s==0) break;
		dem =0;
		next(1);
		cout << dem << endl;
	}
	return 0;
}
