#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n,a[20][20];
string s="";
bool re;
bool b[20][20];
void init() {
	cin >> n;
	for (int i=0 ; i<n; i++) {
		for (int j = 0 ; j< n; j++) {
			cin >> a[i][j];
			b[i][j]= true;
		}
	}
	re = false;
}
bool check(int x,int y) {
	if (x>=0&&x<n&&y>=0&&y<n && a[x][y]) return true;
	return false;
}

void solve(int x,int y) {
	if (x==n-1&&y==n-1) {
		cout << s << " ";
		re = true;
	}
	b[x][y]= true;
	if (check(x+1,y)) {
		s+='D';
		solve(x+1,y);
	}
	if (check(x,y+1)) {
		s+='R';
		solve(x,y+1);
	}
	b[x][y]= false;
	if(s.size() != 0)	{
		s.erase(s.size()-1);
	}
	
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		init();
		solve(0,0);
		if (re==0) cout <<"-1" << endl; 
		cout << endl;
	}
	return 0;
}
