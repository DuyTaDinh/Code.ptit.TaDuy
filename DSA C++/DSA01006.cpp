#include <bits/stdc++.h>
using namespace std;
int check,a[11],i;

void hoanvin(int a[], int n) {
	int k;
	for (i = 1; i <= n; i++)
	{
		cout << a[i];
	}
	cout << " ";
 
	i = n - 1;
	while (i > 0 && a[i] < a[i + 1])	i--;
	if (i > 0)
	{
		k = n;
		while (a[i] < a[k])	k--;
		swap(a[k], a[i]);
		int l = i + 1, r = n;
		while (l <= r)
		{
			swap(a[l], a[r]);
			l++, r--;
		}
	}
	else check = 1;
	
}
int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n;
		cin >> n;
		for (i= 1; i<=n; i++) {
			a[i] = n-i+1;
		}
		check =0;
		while (check==0) {
			hoanvin(a,n);
		}
		cout << endl;
	}

	return 0;
}