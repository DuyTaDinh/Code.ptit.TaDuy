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

int V,E,u,x,y,dem;
vi ke[10005];
bool vs[10005];
vector<ii> res;

void DFS(int u) {
	vs[u] = true;
	for(int i = 0 ; i < ke[u].size(); i++) {
		int v = ke[u][i];
		if(!vs[v]) {
			res.pb(make_pair(u,v));
			dem++;
			if(dem==V-1) return;
			DFS(v);
		}
	}
}
main() {
	SPEED;
	MULTIPLE_TEST {
		cin>>V>>E>>u;
		dem = 0;
		FILL(vs,false);
		CLEAR(ke,V);
		res.clear();
		FOR(i,1,E){
			cin>>x>>y;
			ke[x].pb(y);
			ke[y].pb(x);
		}
		DFS(u);
		if(dem<V-1) cout<<"-1\n";
		else {
			for(int i = 0 ; i< V -1; i++) {
				cout<<res[i].first << " "<<res[i].second << endl;
			}
		}

	}
}
