#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ll long long
#define pb push_back
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

struct job{
	int id;
	int deadline;
	int profit;
};

bool cmp(job a1, job a2) {
	return (a1.profit > a2.profit);
}
int main() {
	SPEED; int t; cin >> t;
	while (t--) {
		int n;
		cin>>n;
		job a[1000];
		REP(i,0,n-1) {
			cin>>a[i].id;
			cin>>a[i].deadline;
			cin>>a[i].profit;
		}
		sort(a,a+n,cmp);
		int dem = 0,res=0,check[n];
		REP(i,0,n-1) check[i]=0;
		REP(i,0,n-1) {
			for(int j=min(n,a[i].deadline) - 1; j >= 0; j--) { // neu deadline > n thi lay  j = n
				if(!check[j]) {
					check[j]=1;
					dem++;
					res+=a[i].profit;
					break;
				}
			}
		}
		cout << dem << " " << res << endl;
	}
	return 0;
}
