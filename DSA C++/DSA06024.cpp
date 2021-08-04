#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i,j,mini, a[n],count = 1;
	for (i = 0 ; i < n; i++) {
		cin >> a[i] ;
	}
	for ( i= 0; i< n-1; i++) {
		mini = i;
		for ( j= i+1 ; j< n; j++) {
			if (a[j] < a[mini]) {
				mini = j;
			}
		}
			swap(a[i],a[mini]);
			cout << "Buoc "<<count++ <<": ";
			for ( j= 0 ; j< n; j++) {
				cout << a[j] << " ";
			}
			cout << endl;
		
	}

	return 0;
}
