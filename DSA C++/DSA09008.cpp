#include <bits/stdc++.h>
using namespace std;

#define FILL(a,x) memset(a, x, sizeof(a))
#define CLEAR(arr,rag) for(int i=0; i<= rag; i++) arr[i].clear();
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MULTIPLE_TEST int tes; cin>>tes; while(tes--)
#define FOR(x,iFi,iLa) for(int x=(iFi);x<=((int)iLa);x++)
#define FOD(x,iFi,iLa) for(int x=(iFi);x>=((int)iLa);x--)
#define pb push_back
#define MAX INT_MAX
#define MIN INT_MIN

typedef vector<bool> vb;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;

const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

int V,E,x,y;
vi List[1005];
bool vs[1005];

void DFS(int u) {
	vs[u] = true;
	for(int i = 0 ; i < List[u].size(); i++) {
		int y = List[u][i];
		if(!vs[y]) DFS(y);
	}
}
main() {
	SPEED;
	MULTIPLE_TEST {
		cin>>V>>E;
		CLEAR(List,V);
		FILL(vs,false);
		FOR(i,1,E) {
			cin>>x>>y;
			List[x].pb(y);
			List[y].pb(x);
		}
		int dem = 0;
		FOR(i,1,V){
			if(!vs[i]) {
				dem++;
				DFS(i);
			}
		}
		cout<<dem<<endl;
	}
}
