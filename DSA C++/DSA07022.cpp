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

int fre[1000002];
main() {
	SPEED;
	MULTIPLE_TEST {
		int n;
		cin>>n;
		FILL(fre,0);
		int a[n],b[n];
		for(int i = 0 ; i< n; i++) {
			cin>>a[i];
			fre[a[i]]++;
		}
		for(int i = 0 ; i< n; i++) {
			b[i] = fre[a[i]];
		}
		int res[n];
		res[n-1] = -1;
		stack<int> st;
		st.push(n-1);
		for(int i = n-2; i>=0; i--) {
			while(!st.empty() && b[i] >= b[st.top()]) st.pop();
			if(!st.empty()) res[i] = a[st.top()];
			else res[i] = -1;
			st.push(i);
		}
		for(int i = 0; i< n; i++) cout<<res[i]<<" ";
		cout<<endl;

	}
}
