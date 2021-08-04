#include <bits/stdc++.h>
using namespace std;
int n,a[10][10];
bool on[10][10];
string s="";
int dem;

void init() {
	cin >> n;
	for ( int i = 0; i < n;i++) {
		for (int j=0; j< n; j++) {
			cin >> a[i][j];
			on[i][j]= false;
		}
	}
}

bool check(int x,int y) {
	if (x<n&&y<n&&x>=0&&y>=0 && a[x][y] == 1 && !on[x][y]) return true;
	return false;
}

void sol(int x,int y) {
	if (x==n-1&&y==n-1) {
		cout << s << " ";
		dem++;
	}
	if (check(x,y)) {
		on[x][y]=true;
		if(check(x+1,y)) {
			s+='D';
			sol(x+1,y);
		}
		if(check(x,y-1)) {
			s+='L';
			sol(x,y-1);
		}
		if(check(x,y+1)) {
			s+='R';
			sol(x,y+1);
		}
		if(check(x-1,y)) {
			s+='U';
			sol(x-1,y);
		}
		on[x][y] = false;
		if (s.size() != 0) {
			s.erase(s.size()-1);
		}
	}
}
int main() {	
	int t;
	cin >> t;
	while ( t--) {
		dem=0;
		init();
		sol(0,0);
		if(!dem) cout << "-1";
		cout << endl;
	}
	return 0;
}
