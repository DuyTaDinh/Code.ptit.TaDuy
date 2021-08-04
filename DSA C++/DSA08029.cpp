#include <bits/stdc++.h>
using namespace std;

#define FILL(a,x) memset(a, x, sizeof(a))
#define CLEAR(arr,rag) for(int i=0; i<= rag; i++) arr[i].clear();
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MULTIPLE_TEST int tes; cin>>tes; while(tes--)
#define FOR(x,iFi,iLa) for(int x=(iFi);x<=((int)iLa);x++)
#define FOD(x,iFi,iLa) for(int x=(iFi);x>=((int)iLa);x--)
#define pb push_back
#define null NULL
#define mp make_pair
typedef vector<int> vi;
typedef pair<vector<int>, int> vii;
typedef long long ll;
const ll mod = (ll)1e9 + 7;
#define fi first
#define se second



int solve(vi a, vi b) {
	set<vector<int> >s;
	queue<vii> q;
	s.insert(a);
	q.push(vii(a,0));
	while(!q.empty()) {
		vii tmp = q.front(); q.pop();
		if(tmp.fi == b) return tmp.se;
		vector<int> l(tmp.fi),r(tmp.fi);
		l[0] = tmp.fi[3]; 
		l[1] = tmp.fi[0];
		l[3] = tmp.fi[4]; 
		l[4] = tmp.fi[1];
		
		r[1] = tmp.fi[4]; 
		r[2] = tmp.fi[1];
		r[4] = tmp.fi[5]; 
		r[5] = tmp.fi[2];
		
		if(s.find(l) == s.end()) {
			s.insert(l);
			q.push(vii(l,tmp.se+1));
		}
		if(s.find(r) == s.end()) {
			s.insert(r);
			q.push(vii(r,tmp.se+1));
		}
	}
}
main() {
	SPEED;
	MULTIPLE_TEST {
		vi a(6),b(6);
		for(int i = 0 ; i< 6; i++) {
			cin >> a[i];
		}
		for (int i = 0 ; i < 6 ; i++) {
			cin>> b[i];
		}
		cout<<solve(a,b)<<endl;

	}
}
