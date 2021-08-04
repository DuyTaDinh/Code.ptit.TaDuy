#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int n,p,s;
vector <int> a,b;
vector <vector<int>> res;

bool prime(int x) {
	if (x < 2) return false;
	for (int i = 2; i<= sqrt(x); i++)
		if (x%i==0) return false;
	return true;
}

void solve(int sum,int n, int s, int i) {
	if (sum == s && b.size() == n) {
		res.pb(b);
		return;
	}
	if (sum > s || i == a.size())
		return;
	b.pb(a[i]);
	solve(sum+a[i],n,s,i+1);
	b.pop_back();
	solve(sum,n,s,i+1);
}
int main() {
	int t;
	cin >> t;
	while ( t--) {
		a.clear(); b.clear(); res.clear();
		cin >> n >> p >> s;
		for (int i = p+1; i<= s; i++) {
			if (prime(i)) a.pb(i);
		}
		solve(0,n,s,0);
		cout << res.size() << endl;
		for (int i = 0; i< res.size(); i++) {
			for (int j = 0; j< res[i].size(); j++) {
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
		
	}
	return 0;
}