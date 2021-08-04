#include <bits/stdc++.h>
using namespace std;
int n,dem;
int a[12][12];
string s="";

void init() {
	cin >> n;
	for ( int  i= 0 ; i<n; i++) {
		for (int j = 0 ; j<n; j++) {
			cin >> a[i][j];
		}
	}
}

bool check(int x,int y) {
	if (x>=0 && y>=0 && x<n && y < n && a[x][y]==1) return true;
	return false;
}

void tracking(int x,int y) {
	if (x==n-1&&y==n-1) {
		cout << s<<" ";
		dem++;
	}
	if(check(x,y)) {
		if (check(x+1,y)) {
			s+='D';
			tracking(x+1,y);
		}
		if (check(x,y+1)) {
			s+='R';
			tracking(x,y+1);
		}
		if (s.size() !=0) {
			s.erase(s.size()-1);
		}
	}
}
int main() {
	int t;
	cin >> t;
	while ( t--) {
		dem = 0;
		init();
		tracking(0,0);
		if(dem==0) cout <<"-1";
		cout << endl;
	}
	return 0;
}
