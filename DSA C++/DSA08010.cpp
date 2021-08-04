#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define MULTIPLE_TEST int t; cin>>t; while(t--)
#define ll long long
#define pb push_back
#define ii pair<int,int>
const ll mod = (ll)1e9 + 7;
#define fi first
#define se second

int solve(int n) {
	queue<ii> q;
	q.push(ii(n,0));
	set<int> kt;
	kt.insert(n);
	while(!q.empty()) {
		ii tmp = q.front(); q.pop();
		if(tmp.fi == 1) return tmp.se;
		if(tmp.fi == 2) return tmp.se+1;
		if(kt.find(tmp.fi -1) == kt.end() && tmp.fi>0) {
			q.push(ii(tmp.fi-1,tmp.se+1));
			kt.insert(tmp.fi-1);
		}
		for(int i = 2; i*i <= tmp.fi; i++) {
			if(tmp.fi % i == 0) {
				if(kt.find(tmp.fi/i) == kt.end()) {
					q.push(ii(tmp.fi/i,tmp.se+1));
					kt.insert(tmp.fi/i);
				}
			}
		}
	}
}

main(){
	SPEED;
	MULTIPLE_TEST{
		int n;
		cin >> n;
		cout<<solve(n)<<endl;
	}
}