#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while ( t-- ) {
		int n,temp,i;
		cin >> n;
		vector <int> a;
		for (i = 0 ; i<n; i++)
		{
			cin >> temp;
			a.push_back(temp);
		}
		sort(a.begin(), a.end());
		for (i = 0; i < a.size()/2; i++)
		{
			cout << a.at(a.size() - 1 - i) << " " << a.at(i) << " ";
		}
		if (a.size() % 2 == 1) cout << a.at((a.size() - 1) / 2);
		cout << endl;
	}
}
