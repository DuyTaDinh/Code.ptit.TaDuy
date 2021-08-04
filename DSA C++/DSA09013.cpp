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

int V,E,x,y,a[1005][1005];
vi ke[1005],dau,cuoi;
bool vs[1005];

bool check() {
	for(int i = 1; i<= V; i++) {
		if(!vs[i]) return true;
	}
	return false;
}
void BFS(int u) {
	queue<int> q;
	q.push(u);
	vs[u]=true;
	while(!q.empty()) {
		int v = q.front(); q.pop();
		for(int i = 0 ; i< ke[v].size(); i++) {
			int y = ke[v][i];
			if(!vs[y] && a[v][y]) {
				vs[y] = true;
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
		FILL(a,0);
		dau.clear();
		cuoi.clear();
		CLEAR(ke,V);
		
		FOR(i,1,E){
			cin>>x>>y;
			ke[x].pb(y);
			ke[y].pb(x);
			a[x][y] = 1;
			a[y][x] = 1;
		}
		
		for(int u = 1; u <= V ; u++) {
	        for(int i = 0 ; i < ke[u].size(); i++){
	            int v = ke[u][i];
	            if(u < v) {
	                a[u][v] = 0;
	                a[v][u] = 0;
	                BFS(1);
	                if(check())
	                {
	                    dau.pb(u);
	                    cuoi.pb(v);
	                }
	                a[u][v] = 1;
	                a[v][u] = 1;
	                FILL(vs,false);
	            }
	        }
	    }
		for(int i =0; i< dau.size(); i++) {
			cout<<dau[i]<<" "<<cuoi[i]<<" ";
		}
		cout<<endl;

	}
}
