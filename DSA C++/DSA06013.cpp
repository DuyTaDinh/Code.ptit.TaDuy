#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n,x,i;
		cin >> n >> x;
		map <int,int> a;
		while (n--) {
			cin >> i;
			a[i]+=1;
		}
		auto f = a.find(x);
		if(f != a.end() ) {
			cout << f->second << endl;
		} else cout << "-1" << endl;
	}

	return 0;
}
