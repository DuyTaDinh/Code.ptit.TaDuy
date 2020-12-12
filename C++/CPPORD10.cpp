#include <bits/stdc++.h>
using namespace std;

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
	    int f[n];
		f[0] = 1;
		for (i=1; i<n;i++)
		{
			f[i]= 1;
			for (j=0;j<i;j++)
			{
				if (a[j] < a[i] && f[i] < f[j] +1) f[i] = f[j]+1; 
			}
		}
		cout << *max_element(f,f+n) << endl;
	}
	return 0;
}

