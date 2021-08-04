#include <bits/stdc++.h>
using namespace std;

#define fillchar(a,x) memset(a, x, sizeof(a))
#define CLEAR(a,rag) for(int i=0; i<= rag; i++) a[i].clear();
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MULTIPLE_TEST int tes; cin>>tes; while(tes--)
#define FOR(x,iFi,iLa) for(int x=(iFi);x<=((int)iLa);x++)
#define FOD(x,iFi,iLa) for(int x=(iFi);x>=((int)iLa);x--)
#define pb push_back
#define MAX INT_MAX
#define MIN INT_MIN

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;

const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

int V,E,u,x,y;
vi ver[1005];
bool vs[1005];


void DFS(int u) {
	stack<int> st;
	st.push(u);
	vs[u] = false;
	cout<<u<<" ";
	while(!st.empty()) {
		int v=st.top(); st.pop();
		for(int i = 0; i < ver[v].size(); i++) {
			int tmp = ver[v][i];
			if(vs[tmp]) {
				cout<<tmp<< " ";
				vs[tmp] = false;
				st.push(v);
				st.push(tmp);
				break;
			}
		}
	}
}
main() {
	SPEED;
	MULTIPLE_TEST {	
		cin>>V>>E>>u;
		CLEAR(ver,V);
		fillchar(vs,true);
		FOR(i,1,E) {
			cin>>x>>y;
			ver[x].pb(y);
			ver[y].pb(x);
		}
		DFS(u);
		cout<<endl;

	}
}
