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
	int n,k;
	cin>>n;
	cin.ignore();
	string s,word;
	int v[n+1][n+1] ={0};
	for(int i = 1; i<=n ;i++) {
		getline(cin,s);
		stringstream tmp(s); 
		while(tmp >> word) {
			stringstream (word ) >> k;
			v[i][k] = 1;
		}
	}
	for(int i = 1; i<= n; i++) {
		for(int j =1; j<= n; j++) {
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
}
