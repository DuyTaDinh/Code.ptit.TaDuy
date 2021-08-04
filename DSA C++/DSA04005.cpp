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

ll f[100];

char Fibo(int n, ll k) {
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<= f[n-2]) return Fibo(n-2,k);
	return Fibo(n-1,k-f[n-2]);
}
main() {
	SPEED;
	f[1]=1;
	f[2]=1;
	for(int i = 3; i<= 92; i++) {
		f[i] = f[i-2] + f[i-1];
	}
	MULTIPLE_TEST {
		int n;
		ll k;
		cin>>n>>k;
		cout<<Fibo(n,k)<<endl;
	}
}
