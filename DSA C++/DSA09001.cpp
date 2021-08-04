#include <bits/stdc++.h>
#define pb push_back
using namespace std;

template <typename T> void fastscan(T& x) // fast input
{
    x = 0; T f = 1;
    char ch = getchar();
    while (!isdigit(ch)) f = ch == '-' ? - f : f, ch = getchar();
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar();
    x *= f;
}
int t,v,e;

main() {
	ios::sync_with_stdio(false);
	fastscan(t);
	while(t--){
		fastscan(v);
		fastscan(e);
		vector <int > g[v+1];
		int a,b;
		for (int i = 0 ; i< e; i++) {
			fastscan(a);
			fastscan(b);
			g[a].pb(b);
			g[b].pb(a);
		}
		for (int i = 1; i<= v; i++) {
			cout << i << ": ";
			for (int j = 0; j< g[i].size(); j++) 
				cout << g[i][j] << " ";
			cout <<"\n";
		}
	}
}