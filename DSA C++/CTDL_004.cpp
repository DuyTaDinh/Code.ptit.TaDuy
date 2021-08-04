#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ll long long
#define pb push_back
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;
int res = 0,n,k;
int a[105];
void Try(int i, int k, int dem) {
	if (dem == k) {
		res++;
		return;
	}
	else {
		for(int j = i+1; j<n; j++) {
			if(a[j] > a[i]) Try(j,k,dem+1);
			else continue;
		}
	}
}
int main() {
	SPEED; 
	cin>>n>>k;
	for(int i = 0 ; i<n; i++) cin>>a[i];
	for(int i =0 ; i< n; i++) {
		Try(i,k,1);
	}
	cout<<res<<endl;
	return 0;
}
