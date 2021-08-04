#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(x,a,b) for (int x=a;x<b;x++)
#define RED(x,a,b) for (int x=a;x>b;x--)
#define ll long long
#define pb push_back
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

int main() {
	SPEED; int t; cin >> t;
	while (t--) {
		int n;
		cin>>n;
		bool check = false;
		for(int i = n / 7; i >=0; i--) {
			int j = n - i*7;
			if(j%4 == 0) {
				check = true;
				REP(a,0,j/4) cout<<4;
				REP(a,0,i) cout<<7;
				cout<<endl;
				break;
			}
		}
		if(check == false) cout<<-1<<endl;
	}
	return 0;
}
