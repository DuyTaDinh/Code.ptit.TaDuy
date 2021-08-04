#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(x,a,b) for (int x=a;x<=b;x++)
#define RED(x,a,b) for (int x=a;x>=b;x--)
#define ll long long
#define pb push_back
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

int main() {
	SPEED; int t; cin >> t;
	while (t--) {
		int n;
		cin>>n;
		string s;
		cin>>s;
		int tmp,a[26]={0};
		priority_queue<int> e;
		for(auto&i : s) a[i-'A']++;
		for(auto&i : a) e.push(i);
		while(n--) {
			tmp = e.top();
			e.pop();
			tmp-=1;
			e.push(tmp);
		}
		int res=0;
		while(!e.empty()) {
			tmp = e.top(); e.pop();
			res+= tmp*tmp; 
		}
		cout<<res<<endl;
	}
	return 0;
}
