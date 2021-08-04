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

bool vs[1005];
vi ke[1005];
int V,E,u,x,y;

void BFS(int u) {
	cout<<u<<" ";
	vs[u]= true;
	queue <int> q;
	q.push(u);
	while(!q.empty()) {
		int v = q.front(); q.pop();
		for(int i = 0 ; i < ke[v].size(); i++) {
			int y= ke[v][i];
			if(!vs[y]) {
				vs[y] = true;
				q.push(y);
				cout<<y<<" ";
			}
		}
	}
}

main() {
	SPEED;
	MULTIPLE_TEST {
		cin>>V>>E>>u;
		CLEAR(ke,V);
		FILL(vs,false);
		FOR(i,1,E) {
			cin>>x>>y;
			ke[x].pb(y);
		}
		BFS(u);
		cout<<endl;
	}
}
