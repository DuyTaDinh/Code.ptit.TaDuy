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

int V,E,M,x,y;
vi ke[1005];
int color[1005];

bool check(int u, int i) {
	for(int j = 0; j < ke[u].size(); j++) {
		if(i == color[ke[u][j]]) return false;
	}
	return true;
}
bool tomau(int u) {
	if(u == V+1) return true;
	for(int i = 1; i<= M; i++) {
		if(check(u,i)) {
			color[u] = i;
			if(tomau(u+1)) return true;
			color[u] = 0;
		}
	}
	return false;
}
main() {
	SPEED;
	MULTIPLE_TEST {
		cin>>V>>E>>M;
		CLEAR(ke,V);
		FOR(i,1,V) {
			color[i] = 0;
		}
		
		FOR(i,1,E) {
			cin>>x>>y;
			ke[x].pb(y);
			ke[y].pb(x);
		}
		(tomau(1)) ? cout<<"YES\n" : cout<<"NO\n";

	}
}
