#include <bits/stdc++.h>
using namespace std;
int check;
void hoanvi(int a[], int n) {
	int i,k;
	for (i = 1; i <= n; i++)
	{
		cout << a[i];
	}
	cout << " ";
 
	i = n - 1;
	while (i > 0 && a[i] > a[i + 1])	i--;
	if (i > 0)
	{
		k = n;
		while (a[i] > a[k])	k--;
		swap(a[k], a[i]);
		int l = i + 1, r = n;
		while (l <= r)
		{
			swap(a[l], a[r]);
			l++, r--;
		}
	}
	else
	{
		check = 1;
	}
}
int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n;
		cin >> n;
		int a[n+1],i;
		for (i= 1; i<=n; i++) {
			a[i] = i;
		}
		check =0;
		while (check==0) {
			hoanvi(a,n);
		}
		cout << endl;
	}

	return 0;
}