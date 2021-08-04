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

int n,x,y;
vi ke[1005];
bool vs[1005];
int truoc[1005];

bool check() {
	for(int i = 1; i<=n; i++) {
		if(!vs[i]) return false;
	}
	return true;
}

void DFS(int u) {
	stack<int> st;
	st.push(u);
	vs[u] = true;
	while(!st.empty()) {
		int v = st.top(); st.pop();
		for(int i =0 ; i< ke[v].size(); i++) {
			int y = ke[v][i];
			if(!vs[y]) {
				vs[y] = true;
				st.push(v);
				st.push(y);
				break;
			}
		}
	}
}
main() {
	SPEED;
	MULTIPLE_TEST {
		cin>>n;
		FILL(vs,false);
		CLEAR(ke,n);
		FOR(i,2,n) {
			cin>>x>>y;
			ke[x].pb(y);
			ke[y].pb(x);
		}
		DFS(1);
		if(check()) cout<<"YES\n";
		else cout<<"NO\n";

	}
}
