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
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

//struct dta{
//	int val;
//	int dem;
//};
//
//int Res(int n){
//	set <int> s;
//	s.insert(n);
//	queue<dta>q;
//	q.push({n,0});
//	while(q.size() > 0){
//		dta tmp = q.front(); q.pop();
//		if(tmp.val == 1)	return tmp.dem;
//		if(tmp.val == 2|| tmp.val == 3 )	return tmp.dem+1;
//		if(tmp.val%2==0 && s.find(tmp.val/2) == s.end() ){
//			q.push({tmp.val/2, tmp.dem+1});
//			s.insert(tmp.val/2);
//		}	
//		if(tmp.val%3==0 && s.find(tmp.val/3) == s.end() ){
//			q.push({tmp.val/3, tmp.dem+1});
//			s.insert(tmp.val/3);
//		}
//		if(tmp.val-1 > 0 && s.find(tmp.val-1) == s.end()){
//			q.push({tmp.val-1, tmp.dem+1});
//			s.insert(tmp.val-1);
//		}
//	}
//}
//main() {
//	SPEED;
//	MULTIPLE_TEST {
//		int n;
//		cin>>n;
//		cout << Res(n) << "\n";
//
//	}
//}
#include<bits/stdc++.h>
using namespace std;
int a[100005];

int main(){
	ios::sync_with_stdio(false);
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		a[1]=0;
		for(int i=2;i<=n;i++){
			a[i]=a[i-1]+1;
			if(i%2==0) a[i]=min(a[i],a[i/2]+1);
			if(i%3==0) a[i]=min(a[i],a[i/3]+1);
		}
		cout<<a[n]<<endl;
	}
}