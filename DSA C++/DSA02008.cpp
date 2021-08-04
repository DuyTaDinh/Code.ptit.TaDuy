#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k,sum,OK;
int x[20][20],a[20];
vector <int> s;
void init() {
	cin >> n>>k;
	for (int i = 1; i<= n; i++) {
		for (int j = 1; j<=n; j++) {
			cin >> x[i][j];
		}
	}
	for (int i =1; i<= n; i++) 
		a[i]=i;
	OK = 0;
}

void solve() {
		sum=0;
		for (int i =1; i<=n; i++) {
			sum +=x[i][a[i]];
		}
		if (sum==k) {
			for(int i = 1; i <= n ; i++)
                s.push_back(a[i]);
		}
		int j=n-1;
		while (a[j] > a[j+1]) j--;
		if (j==0) {
			OK = 1;
		} else {
			int i = n;
			while (a[j] > a[i]) i--;
			swap(a[j],a[i]);
			int l=j+1,r=n;
			while (l<r) {
				swap(a[l],a[r]);
				l++;r--;
			}
		}
	
}

void print() {
	cout << s.size() / n << endl;
    for(int i = 0,cnt = 0; i < s.size() ; i++){
        cout << s[i] << ' ';
        cnt++;
        if(cnt == n) cnt = 0, cout << endl;
    } 
}
int main() {
	iostream::sync_with_stdio(false);
	int t;
	t=1;
	while (t--) {
		init();
		while(!OK) {
			solve();
		}
		print();
	}
	return 0;
}
