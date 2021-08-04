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
	deque<int> dq;
	string s;
	while (t--) {
		cin>>s;
		if (s == "PRINTFRONT") (dq.size()) ? cout<<dq.front()<<endl : cout<<"NONE\n";
		else if (s == "PRINTBACK") (dq.size()) ? cout<<dq.back()<<endl : cout<<"NONE\n";
		else if (s == "PUSHFRONT" ) {
			int x;
			cin>>x;
			dq.push_front(x);
		} else if ( s == "PUSHBACK") {
			int x;
			cin>>x;
			dq.push_back(x);
		} else if (s == "POPFRONT" && dq.size()) dq.pop_front();
		else if (s == "POPBACK" && dq.size()) dq.pop_back(); 
	}
	return 0;
}
