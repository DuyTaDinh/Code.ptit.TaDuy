#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ar array
#define ll long long
#define pb push_back
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

int a[100005];
int x;
string s;
int main() {
	SPEED; int t; cin >> t;
	int index=-1;
	while (t--) {
		cin>>s;
		if(s== "PUSH" ) {
			cin>>x;
			++index;
			a[index]=x;
		} 
		if (s=="PRINT") {
			if(index<=-1) {
				cout<<"NONE" <<endl;
			}
			else cout<<a[index]<<endl;
		}
		if (s=="POP") {
			--index;
			if(index <= -1) index=-1;
		}
	}
	return 0;
}
