#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int d, sum,n,k,x;
int a[50],dem,te;
vector<int> b;
vector<vector<int>> c;
void Try(int i) {
	if (sum == k) {
		c.push_back(b);
		dem++;
		return;
	}
	if (sum >k || i>=n) return;
	b.push_back(a[i]);
	sum+=a[i];
	Try(i+1);
	b.pop_back();
	sum -= a[i];
	Try(i+1);
}
int main() {
	iostream::sync_with_stdio(false);
	 cin >> n >> k;
	for (int i = 0 ; i< n; ++i) {
		cin >> a[i];
	}
	Try(0);
	for (int i = c.size() -1 ; i>= 0 ; i--) {
		for (int j = 0 ; j< c[i].size(); j++) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	cout << dem;
	return 0;
}
