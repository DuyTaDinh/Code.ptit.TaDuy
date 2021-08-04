#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n,a[70][70];
int row[70],col[70],xuoi[70],nguoc[70];
int Max,sum;
void init() {
	n=8;
	for (int i = 1; i<= n; i++) {
		for (int j=1; j<= n; j++) {
			cin >> a[i][j];
		}
	}
	row[70] = col[70] = xuoi[70] = nguoc[70] = {0};
	Max = 0;
	sum =0;
}

void Try(int i) {
	for (int j = 1; j<= n; j++) {
		if (!row[j]&&!col[j]&&!xuoi[i+j-1]&&!nguoc[i-j+n]) {
			sum+=a[i][j];
			row[j]=col[j]=xuoi[i+j-1]=nguoc[i-j+n] = 1;
			if (i <n) Try(i+1);
			else {
				if (sum > Max) {
					Max = sum;
				}
			}
			row[j]=col[j]=xuoi[i+j-1]=nguoc[i-j+n] =0;
			sum-=a[i][j];
		}
	}
}
int main() {
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		init();
		Try(1);
		cout << Max << endl;
	}
	return 0;
}
