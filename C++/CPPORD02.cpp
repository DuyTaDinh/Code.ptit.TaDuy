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
		int n,i;
		cin >> n >> i;
		int max = i; 
		n=n-1;
		while (n--)
		{
			cin >> i;
			if (max < i) max = i;
		}	
		cout << max << endl;
	}
	return 0;
}

