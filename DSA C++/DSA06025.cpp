#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n],i,j,temp,ind,count=1;
	for ( i= 0 ; i< n; i++) {
		cin >> a[i];
	}
		cout << "Buoc " << count-1 << ": ";
		j = 0;
		while (j < count) {
			
			cout << a[j++] << " ";
		}
		cout << endl;
		count++;
	for (i = 1; i< n; i++) {
		ind = i;
		temp = a[i];
		while (ind > 0 && a[ind-1] > temp) {
			a[ind] = a[ind-1];
			ind--;
		}
		a[ind] = temp;
		cout << "Buoc " << count-1 << ": ";
		j = 0;
		while (j < count) {
			
			cout << a[j++] << " ";
		}
		cout << endl;
		count++;
	}
	return 0;
}
