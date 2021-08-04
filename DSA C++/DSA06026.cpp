#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n],i,j;
	for ( i= 0 ; i< n; i++) {
		cin >> a[i];
	}
	int count = 1;
	for ( i= n-1 ; i>=0; i--) {
		bool sw = true;
		for (j = 0 ; j < i; j++) {
			if (a[j] > a[j+1]) {
				sw = false;
				swap(a[j],a[j+1]);
			}
		}
		if (sw) break;
		cout << "Buoc " << count++ << ": ";
		for (j = 0 ; j< n; j++) {
			cout << a[j] << " ";
		}
		cout << endl;
	}

	return 0;
}
