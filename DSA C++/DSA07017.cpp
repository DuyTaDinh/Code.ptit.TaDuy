#include <bits/stdc++.h>
using namespace std;

#define FILL(a,x) memset(a, x, sizeof(a))
#define CLEAR(arr,rag) for(int i=0; i<= rag; i++) arr[i].clear();
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MULTIPLE_TEST int tes; cin>>tes; while(tes--)
#define FOR(x,iFi,iLa) for(int x=(iFi);x<=((int)iLa);x++)
#define FOD(x,iFi,iLa) for(int x=(iFi);x>=((int)iLa);x--)
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

int n;
int next_greater(int i, int a[]) {
	for(int j= i+1; j< n; j++) {
		if(a[j] > a[i]) return j;
	}
	return -1;
}
int right_smaller(int i,int a[]) {
	if(i == -1) return -1;
	for(int j = i+1; j< n ; j++) {
		if(a[j] < a[i]) return a[j];
	}
	return -1;
}

int main()
{
    SPEED;
    int t;
    cin>>t;
    while(t--) {
    	cin>>n;
    	int a[n];
    	for(int i = 0 ; i < n ; i++) cin >> a[i];
    	for(int i = 0 ; i < n ; i++) {
    		cout<<right_smaller(next_greater(i,a),a) <<' ';
		}
		cout<<endl;
	}
    return 0;
}