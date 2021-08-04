#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ll long long
#define pb push_back
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

int main() {
	SPEED; int t; cin >> t;
	while (t--) {
		int n,c,tmp;
		cin>>n;
		queue<int> q;
		while (n--) {
			cin>>c;
			switch(c) {
				case 1: {
					cout<<q.size()<<"\n" ;
					break;
				}
				case 2: {
					(q.empty()) ? cout<<"YES\n" : cout<<"NO\n"; 
					break;
				}
				case 3: {
					cin>>tmp; q.push(tmp);
					break;
				}
				case 4: {
					if(!q.empty()) q.pop();
					break;
				}
				case 5: {
					(!q.empty()) ? cout<<q.front()<<"\n"  : cout<< -1<<"\n" ;
					break;
				}
				case 6: {
					(!q.empty()) ? cout<<q.back()<<"\n" : cout<< -1<<"\n" ;
					break;
				}
			}
		}
	}
	return 0;
}
