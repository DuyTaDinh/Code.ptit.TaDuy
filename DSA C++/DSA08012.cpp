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
const int N = (int) 1e5;

bool kt(int n){
    int check[10] = {0};
    while(n) {
    	if(n%10>5) return false;
    	if(check[n%10] == 1) return false;
    	check[n%10] = 1;
    	n/=10;
	}
	return true;
}
main() {
	SPEED;
	MULTIPLE_TEST {
		int l,r;
     	cin >> l >> r;
     	int d = 0;
     	for(int i = l; i <= r; i++) {
     		if (kt(i)) d++;
		 }
		 cout<<d<<endl;
	}
}