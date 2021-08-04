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

int check() {
	int d=0;
	FOR(i,1,V) {
		if(ke[i].size()&1) d++;
	}
	if(d==0) return 2;
	else if(d==2) return 1;
	else return 0;
}
main() {
	SPEED;
	MULTIPLE_TEST {
		cin>>V>>E;
		CLEAR(ke,V);
		FOR(i,1,E) {
			cin>>x>>y;
			ke[x].pb(y);
			ke[y].pb(x);
		}
		cout<<check()<<endl;

	}
}
