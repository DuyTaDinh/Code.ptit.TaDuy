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

int V,E,x,y;
bool check,vs[1005];
vi ke[1005];

bool DFS(int u,int t) {
	vs[u]=true;
	for(int i = 0; i < ke[u].size(); i++) {
		int v = ke[u][i];
		if(!vs[v]) {
			DFS(v,u);
		} else if(v!=t) return true;
	}
	return false;
}

bool chutrinh() {
	FOR(i,1,V) {
		FILL(vs,false);
		if(DFS(i,0)) return true;
	}
	return false;
}
main() {
	SPEED;
	MULTIPLE_TEST {
		cin>>V>>E;
		CLEAR(ke,V);
		FOR(i,1,E) {
			cin>>x>>y;
			ke[x].pb(y);
		}
		if(chutrinh()) cout<<"YES\n";
		else cout<<"NO\n";

	}
}
