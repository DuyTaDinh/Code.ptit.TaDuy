#include <bits/stdc++.h>
using namespace std;

#define FILL(a,x) memset(a, x, sizeof(a))
#define CLEAR(arr,rag) for(int i=0; i<= rag; i++) arr[i].clear();
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MULTIPLE_TEST int tes; cin>>tes; while(tes--)
#define FOR(x,iFi,iLa) for(int x=(iFi);x<=((int)iLa);x++)
#define FOD(x,iFi,iLa) for(int x=(iFi);x>=((int)iLa);x--)
#define pb push_back
typedef vector<bool> vb;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
const ll mod = (ll)1e9 + 7;

int N,M,x,y,Q,u,v;
bool vs[1005];
vi ke[1005];

bool checkBFS(int s,int t) {
	if(s==t) return true;
	queue<int> q;
	q.push(s);
	vs[s] = false;
	while(!q.empty()) {
		int u = q.front(); q.pop();
		for(int i = 0 ; i< ke[u].size(); i++) {
			int v = ke[u][i];
			if(v == t) return true;
			if(vs[v]) {
				q.push(v);
				vs[v] = false;
			}
		}
	}
	
	return false;
}

//bool checkDFS(int s, int t) {
//	if(s==1) return true;
//	vs[s] = false;
//	for(int i = 0; i< ke[s].size(); i++) {
//		int v = ke[s][i];
//		if(v == t) return true;
//		if(vs[v]) checkDFS(v,t); 
//	}
//	return false;
//}

main() {
	SPEED;
	MULTIPLE_TEST {
		cin>>N>>M;
		CLEAR(ke,N);
		FOR(i,1,M) {
			cin>>u>>v;
			ke[u].pb(v);
			ke[v].pb(u);
		}
		cin>>Q;
		FOR(i,1,Q) {
			cin>>x>>y;
			FILL(vs,true);
			if(checkBFS(x,y)) cout<<"YES\n";
			else cout<<"NO\n";
		}

	}
}
