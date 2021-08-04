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

int V,E,x,y,s,t;
bool vs[1005];
vi ke[1005];
int truoc[1005];

void DFS(int u) {
	vs[u] = true;
	for(int i = 0 ; i< ke[u].size(); i++) {
		int v = ke[u][i];
		if(!vs[v]) {
			DFS(v);
			truoc[v]= u;
		}
	}	
}

main() {
	SPEED;
	MULTIPLE_TEST {
		cin>>V>>E>>s>>t;
		CLEAR(ke,V);
		FILL(vs,false);
		FILL(truoc,0);
		FOR(i,1,E) {
			cin>>x>>y;
			ke[x].pb(y);
		}
		DFS(s);
		
		if(!truoc[t]) {
			cout<<"-1\n";
		} else {
			stack<int> st;
			st.push(t);
			while(truoc[t] != s) {
				t = truoc[t];
				st.push(t);
			}
			cout<<s<<" ";
			while(!st.empty()) {
				cout<<st.top()<<" ";
				st.pop();
			}
			cout<<endl;
		}
		

	}
}
