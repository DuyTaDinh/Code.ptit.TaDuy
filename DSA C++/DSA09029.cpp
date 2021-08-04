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
vi ke[100];
bool vs[100],stop;

bool DFS(int u,int d) {
	if(d == V) return true;
	vs[u] = true;
	for(int i = 0; i< ke[u].size(); i++) {
		int v = ke[u][i];
		if(!vs[v] && DFS(v,d+1)) return true;
	}
	vs[u] = false;
	return false;
}
main() {
	SPEED;
	MULTIPLE_TEST {
		cin>>V>>E;
		CLEAR(ke,V);
		FILL(vs,false);
		FOR(i,1,E) {
			cin>>x>>y;
			ke[x].pb(y);
			ke[y].pb(x);
		}
		stop = false;
		FOR(i,1,V) {
			if(DFS(i,1)) {
				stop = true;
				break;
			}
		}
		(stop) ? cout<<"1\n" : cout<<"0\n";
	}
}
