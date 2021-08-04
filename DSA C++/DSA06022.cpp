#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,i,j;
		cin >>n;
		j=n;
		map <int , int> a;
		while(j--) {
			cin >> i;
			a[i]+=1;
		}
		int count = 0;
		for (auto const &i : a) {
			if (i.second == n) {
				cout << "-1";
				break;
			} else {
				cout << i.first <<" ";
				count++;
				if (count == 2) break;
			}
		}
		cout << endl;
		
	}
	return 0;
}
