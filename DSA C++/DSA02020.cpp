#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define INF 1e18

int n,pr[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
ll ans;
void dfs(int dep,int cnt,ll res)
{
    if(cnt > n)
        return;
    if(cnt == n){
        ans = min(ans,res);
        return ;
    }
    for(int i = 1;i <= 63;++i){
        if(res > ans/pr[dep])
            break;
        dfs(dep+1,cnt*(i+1),res *= pr[dep]);
    }
}
int main(){
	SPEED;
	int t;cin>>t;
	while(t--) {
		ans = INF;
		cin>>n;
		dfs(0,1,1);
		cout<<ans<<endl;
	}
    return 0;
}