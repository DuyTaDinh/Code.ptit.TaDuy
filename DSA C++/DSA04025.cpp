#include <bits/stdc++.h>
using namespace std;

#define FILL(a,x) memset(a, x, sizeof(a))
#define CLEAR(arr,rag) for(int i=0; i<= rag; i++) arr[i].clear();
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MULTIPLE_TEST int tes; cin>>tes; while(tes--)
#define FOR(x,iFi,iLa) for(int x=(iFi);x<((int)iLa);x++)
#define FOD(x,iFi,iLa) for(int x=(iFi);x>((int)iLa);x--)
#define pb push_back
#define null NULL
#define mp make_pair
typedef vector<bool> vb;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
const ll mod = (ll)1e9 + 7;

int n,k;
struct matran{
	ll mt[11][11];
}; 

matran operator * (matran a,matran b) {
	matran res;
	FOR(i,0,n) {
		FOR(j,0,n) {
			res.mt[i][j] = 0;
			FOR(k,0,n) {
				res.mt[i][j] = (res.mt[i][j] + a.mt[i][k]*b.mt[k][j])%mod;
			}
		}
	}
	return res;
}
matran power(matran a, ll n) {
	if(n==1) return a;
	if(n&1) return a*power(a,n-1);
	matran tmp = power(a,n/2);
	return tmp*tmp;
}
main() {
	SPEED;
	MULTIPLE_TEST {
		cin>>n>>k;
		matran a;
		FOR(i,0,n) {
			FOR(j,0,n) {
				cin>>a.mt[i][j];
			}
		}
		matran x = power(a,k);
		ll result = 0;
		FOR(i,0,n){
			result = (result +x.mt[i][0]) %mod;
		}
		cout<<result<<endl;
	}
}
