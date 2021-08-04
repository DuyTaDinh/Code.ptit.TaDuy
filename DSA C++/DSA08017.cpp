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

vector<string> s;
int a[30],n,size;

void solve(int m) {
	if(size<m) {
		string sub="";
		for(int i = 1; i<= size;i++) {
			if(a[i]) sub+="8";
			else sub+="6";
		}
		s.pb(sub);
		return;
	}
	for(int i = 0 ; i<= 1; i++) {
		a[m] = i;
		solve(m+1);
	}
	
}

main() {
	SPEED;
	MULTIPLE_TEST {
		cin>>n;
		s.clear();
		for(int i = 1; i<= n; i++) {
			size = i;
			solve(1);
		}
		for(int i = s.size() - 1; i>=0; i--) cout<<s[i]<<" ";
		cout<<endl;
	}
}