#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >>n ;
	int a[n];
	int i , j ,temp, count = 1;
	for ( i= 0 ;i < n; i++) {
		cin >> a[i];
	}
	for (i = 0; i<n-1; i++) {
		for ( j= i+1; j< n; j++) {
			if (a[i] > a[j]) swap(a[i],a[j]);
		}
		cout << "Buoc " << count++ << ": " ;
		for ( j= 0 ; j<n; j++) {
			cout << a[j] << " ";
		}	
		cout << endl;
	}
	
	
	
	
	return 0;
}
