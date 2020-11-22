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
		vector <int> a1,b1;
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
			a1.push_back(*i);
		}
		sort(a1.begin(),a1.end());
		for (vector<int>::iterator i = a1.begin(); i!= a1.end() ; i++) {
			cout << *i << " ";
		}
		cout << endl;
		for (map<int, int>::iterator i = b.begin();i != b.end(); i++) {
			if (i->second == 2) {
				b1.push_back(i->first);
			}
		}
		sort(b1.begin(),b1.end());
		for (vector<int>::iterator i = b1.begin(); i!= b1.end() ; i++) {
			cout << *i << " ";
		}
		cout << endl;
	}
	return 0;
}

