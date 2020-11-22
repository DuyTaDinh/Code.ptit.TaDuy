#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
	
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,m,temp;
		long i;
		vector <long> a;
		cin >> n >> m;
		while (n--)
		{
			cin >> temp;
			a.push_back(temp);
		}
		while (m--)
		{
			cin >> temp;
			a.push_back(temp);
		}
		sort(a.begin(),a.end());
		for (auto i: a)
		{
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}

