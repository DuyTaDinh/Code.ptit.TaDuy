#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ll long long
#define pb push_back
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

int n,i,j;
int a[65536][16],dp[65536][16];

int tsp(int bit, int pos,int s){
    int cost = INT_MAX;
    if (bit == ((1 << n) - 1))   return 0;
    if (dp[bit][pos] != -1)   return dp[bit][pos];
    for (int i = 0; i < n; ++i){
        if ((bit & (1 << i)) == 0)
            cost = min(cost,tsp(bit | (1 << i) , i,s) + a[pos][i]);
    }
    dp[bit][pos] = cost;
    return cost;
}

int main() {
	SPEED; 
	cin>>n;
	for(i = 0; i<n ; i++) 
		for(j = 0; j<n ; j++) 
			cin >> a[i][j];
	for(i= 0 ; i <= (1<<n) ; i++) 
		for( j = 0 ; j <= n; j++)
			dp[i][j]=-1;
			
	for(i = 0 ; i<n;i++) {
			cout<<tsp((1<<i), i-1, i)<<endl;
		}
//	cout<<tsp((1<<n-1), n-1, n-1);
    return 0;
}

