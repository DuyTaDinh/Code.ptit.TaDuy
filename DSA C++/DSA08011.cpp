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
string a,b;
unordered_map<string,int> M;

int solve() {
	M.clear();
	unordered_set<string > s;
	for(int i = 0 ; i< n ; i++) {
		string tmp; cin>> tmp;
		M[tmp] = 0;
		s.insert(tmp);
	}
	M[a] = 1;
	queue<string> q;
	q.push(a);
	string s1,s2;
	while(!q.empty()) {
		s1 = q.front(); q.pop();
		if(s1 == b) {
			return M[s1];
		}
		for(int i = 0; i< s1.size(); i++) {
			for(char c = 'A'; c<= 'Z'; c++) {
				s2 = s1;
				s2[i] = c;
				if(s.find(s2) != s.end() && M[s2] == 0) {
					q.push(s2);
					M[s2] = M[s1] +1;
				}
			}
		}
	}
	
}

main() {
	SPEED;
	MULTIPLE_TEST {
		cin>> n;
		cin>> a>>b;
		cout<<solve()<<endl;
	}
}
