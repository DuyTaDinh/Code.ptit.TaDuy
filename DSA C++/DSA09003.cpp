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
typedef vector<vii> vvii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;

const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

vi dinh[1005];
int v,e,x,y;

main() {
	SPEED;
	MULTIPLE_TEST {
		cin>>v>>e;
		CLEAR(dinh,v);
		FOR(i,1,e) {
			cin>>x>>y;
			dinh[x].pb(y);
		}
		for(int i = 1; i<= v; i++) {
			cout<<i<<": "; 
			for(int j = 0; j< dinh[i].size(); j++) {
				cout <<dinh[i][j]<<" ";
			}
			cout<<endl;
		}

	}
}
