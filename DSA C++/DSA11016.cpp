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

main() {
	SPEED;
	MULTIPLE_TEST {
		int n;
		int x,y;
		char z;
		cin>>n;
		int a[n];
		set<int> s;
		FOR(i,1,n) {
			cin>>x>>y>>z;
			s.insert(x);
			s.insert(y);
		}
		vector<int> v(s.begin(),s.end());
		for(auto& i: v) {
			cout<<i<<" ";
		}
		cout<<endl;

	}
}
