#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n,dem;
int row[120],col[120], a[120],b[120];
void Try(int i) {
	for (int j =1; j<=n; j++) {
		if (!row[j]&&!col[j]&&!a[i+j-1]&&!b[i-j+n]) {
			row[j]=col[j]=a[i+j-1]=b[i-j+n]=1;
			if (i<n) Try(i+1);
			else dem++;
			row[j]=col[j]=a[i+j-1]=b[i-j+n]=0;
		}
	}
}
int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		row[120] = {0},col[120] = {0}, a[120]={0},b[120]={0};
		dem = 0;
		Try(1);
		cout << dem << endl;
	}
	return 0;
}
