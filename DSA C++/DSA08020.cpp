#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define MULTIPLE_TEST int t; cin>>t; while(t--)
#define FOR(x,a,b) for (int x=a;x<=b;x++)
#define FOD(x,a,b) for (int x=a;x>=b;x--)
#define ll long long
#define pb push_back
#define MAX INT_MAX
#define pii pair<int,int>
const int limit = 2e5 + 5;
const ll mod = (ll)1e9 + 7;

int snt[10001] ={0},nta[4],dem[10001];

void sang(){
	for(int i = 2; i <= 9999 ; ++i)
		if(snt[i] == 0){
			for(int j = i*i; j <= 9999 ; j+=i)
				snt[j] = 1;
		}
}

void numToArr(int nta[], int n){
	for(int i = 3; i>=0 ; i--) {
		nta[i] = n%10;
		n/=10;
	}
}

int arrToNum(int nta[]) {
	return 1000*nta[0]+100*nta[1]+10*nta[2] +nta[3];
}

int main(){
	SPEED;
	sang(); 
	MULTIPLE_TEST{
		int s,t;
		cin>>s>>t;
		memset(dem,-1,sizeof(dem));
		queue<int> q;
		q.push(s);
		dem[s]=0;
		while(!q.empty()) {
			s = q.front(); q.pop();
			if(s==t) {
				cout<< dem[t] << endl;
				break;
			}
			for(int i = 0; i <= 3; i++) {
				numToArr(nta,s);
				for(int j = 0 ; j<= 9 ; j++) {
					nta[i] = j;
					int tmp = arrToNum(nta);
					if(snt[tmp] == 0 && dem[tmp] == -1 && tmp > 1000) {
						dem[tmp] = dem[s] +1;
						q.push(tmp);
					}
				}
			}
		}
	}
}
