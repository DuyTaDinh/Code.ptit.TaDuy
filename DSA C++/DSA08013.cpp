#include <bits/stdc++.h>
using namespace std;

#define FILL(a,x) memset(a, x, sizeof(a))
#define CLEAR(arr,rag) for(int i=0; i<= rag; i++) arr[i].clear();
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MULTIPLE_TEST int tes; cin>>tes; while(tes--)
#define FOR(x,iFi,iLa) for(int x=(iFi);x<=((int)iLa);x++)
#define FOD(x,iFi,iLa) for(int x=(iFi);x>=((int)iLa);x--)
#define pb push_back
#define fi first
#define se second
typedef pair<int, int> ii;
typedef pair<pair<int, int>,int> pii;


int n;
ii s,e;
char a[101][101];
int check[101][101];

int solve() {
	queue<pii> q;
	q.push(pii(s,0));
	check[s.fi][s.se] = 1;
	while(!q.empty()) {
		pii tmp = q.front(); q.pop();
		if(tmp.fi == e) {
			return tmp.se;
		}
		for(int i = tmp.fi.fi+1; i< n ; i++) {
			if(a[i][tmp.fi.se] == 'X') break;
			if(!check[i][tmp.fi.se]) {
				check[i][tmp.fi.se] = 1;
				q.push(pii(ii(i,tmp.fi.se),tmp.se+1));
			}
		}
		for(int i = tmp.fi.fi-1; i>=0 ; i--) {
			if(a[i][tmp.fi.se] == 'X') break;
			if(!check[i][tmp.fi.se]) {
				check[i][tmp.fi.se] = 1;
				q.push(pii(ii(i,tmp.fi.se),tmp.se+1));
			}
		}
		for(int i = tmp.fi.se+1; i< n ; i++) {
			if(a[tmp.fi.fi][i] == 'X') break;
			if(!check[tmp.fi.fi][i]) {
				check[tmp.fi.fi][i] = 1;
				q.push(pii(ii(tmp.fi.fi,i),tmp.se+1));
			}
		}
		for(int i = tmp.fi.se-1; i>=0 ; i--) {
			if(a[tmp.fi.fi][i] == 'X') break;
			if(!check[tmp.fi.fi][i]) {
				check[tmp.fi.fi][i] = 1;
				q.push(pii(ii(tmp.fi.fi,i),tmp.se+1));
			}
		}
	}	
}
main() {
	SPEED;
	MULTIPLE_TEST{
		cin >> n;
		memset(check,0,sizeof(check));
		for(int i = 0 ; i < n ; i ++) {
			for(int j = 0 ; j< n ; j++) {
				cin>> a[i][j];
			}
		}	
		cin>>s.fi>>s.se>>e.fi>>e.se;
		cout<<solve()<<endl;
	}	
}