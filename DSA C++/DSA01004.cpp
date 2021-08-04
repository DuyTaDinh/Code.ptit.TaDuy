#include <bits/stdc++.h>
using namespace std;
int OK;
int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n,k;
		cin >> n >> k;
		int a[k+1],i,j;
		for (i = 1; i<=k; i++) {
			a[i] = i;
		}
		bool end = false;
		while(!end) {
			for(i=1; i<=k; i++) 
				cout << a[i];
			cout<< " ";
			i=k;
			while(a[i] == n-k+i) i--;
			if ( i == 0) 
				end = true;
			else {
				a[i]++;
				for (j = i+1;j<=k; j++) {
					a[j] = a[j-1]+1;
				}
			}
		} 
		cout << endl;
	}

	return 0;
}
