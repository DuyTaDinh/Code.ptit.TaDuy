#include <iostream>
#include <vector>
using namespace std;

void solve() 
{
	int n,k;
	cin >> n >> k;
	int i, j, a[n], count = 0;
	for ( i= 0 ; i<n; i++)
	{
		cin >> a[i];
	}
	for (i = 0 ; i< n-1; i++)
	{
		for ( j= i+1; j< n; j++)
		{
			if (a[i] + a[j] == k) count++;
		}
	}
	cout << count << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
