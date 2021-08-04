#include <bits/stdc++.h>
using namespace std;

#define fillchar(a,x) memset(a, x, sizeof(a))
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MULTIPLE_TEST int tes; cin>>tes; while(tes--)
#define FOR(x,itFir,itLas) for (auto x=itFir;x<=itLas;x++)
#define FOD(x,itFir,itLas) for (auto x=itFir;x>=itLas;x--)
#define pb push_back
#define MAX INT_MAX
#define MIN INT_MIN

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;

const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

vector<int> List[200005];
int n, dep[200005];
ll dp[200005], sub[200005];

void dfs(int u){
    dp[u] = dep[u];
	sub[u] = 1;
	for(auto &i : List[u]){
		dfs(i);
		dp[u] += dp[i];
		sub[u] += sub[i];
	}
}

main() {
	SPEED;
	int tmp; 
	cin>>n;
	for(int i=2; i<=n; i++){
		cin>>tmp;
		List[tmp].push_back(i);
		dep[i] = dep[tmp] + 1;
	}
	dfs(1);
	for(int i=1; i<=n; i++)
		cout << dp[i] - sub[i] * (dep[i] - 1) <<" ";
}
