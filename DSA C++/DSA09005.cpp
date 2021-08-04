#include <bits/stdc++.h>
using namespace std;

#define FILLCHAR(a,x) memset(a, x, sizeof(a))
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

vi ver[1005];
bool vs[1005];
int V,E,u,x,y;


void BFS(int u) {
	vs[u]=false;
	cout<<u<<" ";
	queue<int> q;
	q.push(u);
	while(!q.empty()) {
		int v = q.front();
		q.pop();
		for(int i = 0; i< ver[v].size(); i++) {
			int tmp = ver[v][i];
			if(vs[tmp]) {
				q.push(tmp);
				vs[tmp] = false;
				cout<<tmp<<" ";
			}
		}
	}
}
main() {
	SPEED;
	MULTIPLE_TEST {
		cin >>V>>E>>u;
		FILLCHAR(vs,true);
		CLEAR(ver,V);		
		FOR(i,1,E) {
			cin>>x>>y;
			ver[x].pb(y);
			ver[y].pb(x);
		}		
		BFS(u);
		cout<<endl;

	}
}
