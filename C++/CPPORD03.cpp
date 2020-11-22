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
		vector <int> a;
		int n,i,k;
		cin >> n >> k;
		n= n*n;
		while (n--)
		{
			cin >> i;
			a.push_back(i);
		}	
		sort(a.begin(), a.end());
		cout << a.at(k-1) << endl;
	}
	return 0;
}

