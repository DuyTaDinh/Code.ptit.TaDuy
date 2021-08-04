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
vi d1[1005],d2[1005];

main() {
	SPEED;
	MULTIPLE_TEST {
		cin>>V>>E;
		CLEAR(d1,V);
		CLEAR(d2,V);
		FOR(i,1,E) {
			cin>>x>>y;
			d1[x].pb(y);
			d2[y].pb(x);
		}
		int d=0;
		FOR(i,1,V) {
			if(d1[i].size() != d2[i].size()) d++;
		}
		if(!d) cout<<"1\n";
		else cout<<"0\n";

	}
}
