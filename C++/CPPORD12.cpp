#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void solve()
{

}

int main() {
	int t;
	cin >> t;
	while (t--) {
		set <int> a;
		int n,i;
		cin >> n;
		while (n--)
		{
			cin >> i;
			if (i>0) a.insert(i);
		}	
		i=0;
		while (++i)
		{
			if (a.count(i) == 0)
			{
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}

