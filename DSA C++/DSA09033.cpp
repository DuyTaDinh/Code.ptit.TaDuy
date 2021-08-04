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
bool vs[100005];
vi ke[100005];
bool check;

void BFS(int u) {
	queue<int> q;
	q.push(u);
	while(!q.empty()) {
		int  v = q.front(); q.pop();
		vs[v] = true;
		for(int i = 0 ; i < ke[v].size(); i++) {
			int y = ke[v][i];
			if(!vs[y]) {
				q.push(y);
			}
		}
	}
}
main() {
	SPEED;
	MULTIPLE_TEST {
		cin>>V>>E;
		FILL(vs,false);
		CLEAR(ke,V);
		check = true;
		
		FOR(i,1,E) {
			cin>>x>>y;
			ke[x].pb(y);
			ke[y].pb(x);
		}
		BFS(1);
		FOR(i,1,V) {
			if(!vs[i]) {
				cout<<"NO\n";
				check = false;
				break;
			}
		}
		if(check) cout<<"YES\n";
	}
}
