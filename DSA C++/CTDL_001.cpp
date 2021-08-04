#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	iostream::sync_with_stdio(false);
		int n;
		cin >>n ;
		int a[n];
		for (int i = 0 ; i< n; ++i) {
			a[i] = 0;
		} 
		int Ok = 0, check = 1;
		while (!Ok) {
			check = 1;
			for (int i = 0 ; i < n/2+1; ++ i) {
				if (a[i] != a[n-i-1]) {
					check = 0;
					break;
				}
			}
			if (check == 1) {
				for(int i = 0 ; i< n; ++i) {
					cout << a[i] << " ";
				} 
				cout << endl;
			}
						
			int j = n-1;
			while(a[j] == 1 && j>=0) j--; 
			if (j==-1) {
				Ok = 1;
			} else {
				a[j]=1;
				for (int i = j+1; i<n; ++i) {
					a[i] = 0;
				}
			}
		}
	return 0;
}
