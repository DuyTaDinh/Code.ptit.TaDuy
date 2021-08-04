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

const bool MULTI_TEST = true;

void solve(){
	string s;
	cin>>s;
	vector <int> o,c;
	int res = 0,pos = 0;
	for(int i=0;i<s.size();i++){
		if(s[i] == '['){
			if(c.size()&&pos<c.size()){
				res += i - c[pos];
				pos++;
				for(int i=pos;i<c.size();i++) c[pos]++;
			}else o.pb(i);
		}else{
			if(o.size()) o.pop_back();
			else
			{
				c.pb(i);
			}
			
		}
	}
	cout<<res<<endl;
}

int main(){
	SPEED;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}
