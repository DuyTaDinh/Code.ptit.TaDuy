#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
	int n,m,temp;
	cin >> n >> m;
	vector <long> a,b;
	while ( n--) 
	{
		cin >> temp;
		a.push_back(temp);
	}
	while ( m--) 
	{
		cin >> temp;
		b.push_back(temp);
	}
	long maxa = *max_element(a.begin(),a.end());
	long minb = *min_element(b.begin(),b.end());
	cout << maxa*minb << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

