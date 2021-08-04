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
		cin>>n;
		int a[n+1];
		stack<int> st;
		vector<ii> um;
		FOR(i,0,n-1) {
			cin>>a[i];
			um.pb(make_pair(i,1));
		}
		st.push(0);
		FOR(i,1,n-1) {
			while(!st.empty() && a[i] >= a[st.top()]) {
				um[i].second += um[st.top()].second;
				st.pop();
			}
			st.push(i);
			
		}
		FOR(i,0,n-1) {
			cout<<um[i].second << " ";
		}
		cout<<endl;

	}
}
