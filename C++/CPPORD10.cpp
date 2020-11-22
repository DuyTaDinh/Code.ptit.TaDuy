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
		int a[n],temp,max = 1;
		for (i=0; i<n;i++)
		{
			cin >> a[i];
		}	
		for (i=0; i<n;i++)
		{
			temp = 1;
			for (j=i+1;j<n;j++)
			{
				if (a[j] > a[i]) temp++;
				else if (a[j] == a[j-1]) ;
				else break;
			}
			if (temp > max) max = temp;
		}
		cout << max << endl;
	}
	return 0;
}

