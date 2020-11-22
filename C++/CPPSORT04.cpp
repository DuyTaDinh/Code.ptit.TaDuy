#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- ) {
		int n,m,i,j,temp;
		cin >> n >> m;
		set <int> a;
		map <int,int> b;
		while (n--) {
			cin >> temp;
			a.insert(temp);	
			b[temp] +=1;
		}
		while (m--) {
			
			cin >> temp;
			a.insert(temp);
			b[temp] +=1;
		}
		for (set<int>::iterator i = a.begin(); i!= a.end() ; i++) {
			cout << *i << " ";
		}
		cout << endl;
		for (map<int, int>::iterator i = b.begin();i != b.end(); i++) {
			if (i->second == 2) {
				cout << i->first << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
