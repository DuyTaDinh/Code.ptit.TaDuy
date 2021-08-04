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
vi ke[1005];
int vs[1005];

bool check(int i, int vs[]){
	queue<int> q;
	q.push(i);
	vs[i] = 1;
	while(!q.empty()){
		int t = q.front();
		q.pop();
		for(int i = 0; i < ke[t].size(); i++){
			int y = ke[t][i];
			if(vs[y] == -1){
				vs[y] = 1 - vs[t];
				q.push(y);
			}
			else if(vs[y] == vs[t])	return false;
		}
	}
	return true;
}

bool solve(){
	for(int i = 1; i <= V; i++){
		vs[i] = -1;
	}
	for(int i = 1; i <= V; i++){
		if(vs[i] == -1){
			if(!check(i,vs)) return false;
		}
	}
	return true;
}

main() {
	SPEED;
	MULTIPLE_TEST {
		cin>>V>>E;
		CLEAR(ke,V);
		FOR(i, 1, E) {
			cin>>x>>y;
			ke[x].pb(y);
			ke[y].pb(x);
		}
		(solve()) ? cout<<"YES\n" : cout<<"NO\n";

	}
}
