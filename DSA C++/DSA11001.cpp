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

main() {
	SPEED;
	MULTIPLE_TEST {
		string s;
		cin>>s;
		stack<string> st;
		for(int i = 0 ; i < s.size(); i++) {
			if(s[i] >= 'a' && s[i] <= 'z') st.push(string(1,s[i]));
			else {
				string s1 = st.top();
				st.pop();
				string s2 = st.top();
				st.pop();
				st.push(s2 + string(1,s[i]) + s1);
			}
		}
		cout << st.top() << endl;

	}
}
