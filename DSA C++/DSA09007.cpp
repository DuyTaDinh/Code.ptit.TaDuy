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

int V,E,s,t,x,y,truoc[1005];
bool vs[1005];
vi ver[1005];

void BFS(int u) {
	queue<int> q;
	q.push(u);
	vs[u]= false;
	while(!q.empty()) {
		int v = q.front(); q.pop();
		for(int i = 0 ; i< ver[v].size(); i++) {
			int tmp = ver[v][i];
			if(vs[tmp]) {
				q.push(tmp);
				vs[tmp] = false;
				truoc[tmp] = v; 
			}
		}
	}
}

void duong(int s,int t) {
	if(!truoc[t]) cout<<"-1";
	else {
		stack<int> st;
		int tmp = t;
		while(truoc[t]!=s) {
			t = truoc[t];
			st.push(t);
		}
		cout<<s<<" ";
		while(!st.empty()) {
			cout<<st.top()<<" ";
			st.pop();
		}
		cout<<tmp;
	}
}

main() {
	SPEED;
	MULTIPLE_TEST {
		cin>>V>>E>>s>>t;
		CLEAR(ver,V);
		FILL(vs,true);
		FILL(truoc,0);
		FOR(i,1,E) {
			cin>>x>>y;
			ver[x].pb(y);
			ver[y].pb(x);
		}
		BFS(s);
		duong(s,t);
		cout<<endl;

	}
}
