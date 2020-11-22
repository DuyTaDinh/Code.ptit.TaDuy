#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{

}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,i,j;
		cin >> n ;
		int a[n],temp,maxRange = -1;
		for (i=0; i<n;i++)
		{
			cin >> a[i];
		}	
		for (i=0; i<n;i++)
		{
			for (j=i+1;j<n;j++)
			{
				if (a[j] - a[i] > maxRange) maxRange = a[j] - a[i];
			}
		}
		cout << maxRange << endl;
	}
	return 0;
}

