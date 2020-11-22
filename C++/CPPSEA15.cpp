#include <bits/stdc++.h>
using namespace std;
int findnearx(int a[], int low, int high, int x)
{
	if (a[high] <= x) 
		return high;
	if (a[low] > x)
		return low;
	int mid = (high +low) / 2;
	if (a[mid] <= x && a[mid+1] >x )
		return mid;
	if (a[mid] > x)
		return findnearx(a,low, mid -1,x);
	else 
		return findnearx(a,mid+1,high,x);
}
void solve (int a[], int n, int k, int x) {
	int l = findnearx(a,0,n-1,x);
	int r = l+1, count = 0;
	if (a[l] == x) l--; 
	while (l>=0 && r <n && count <k)
	{
		if( x - a[l] < a[r] - x)
			cout << a[l--] << " " << a[r++] << " ";
		else
			cout << a[r++] << " " << a[l--] << " ";
		count=count+2;
	}
	while (count < k && l >= 0) {
		cout << a[l--] << " ";
		count++;
	}
    while (count < k && r < n) {
    	cout << a[r++] << " ";
    	count ++;
    }
        
}
int main() {
	int t;
	cin >> t;
	while ( t--)
	{
		int n,k,x;
		cin >> n;
		int a[n],i;
		for ( i= 0 ; i< n; i++) {
			cin >> a[i];
		}
		cin >> k >> x;
		solve(a,n,k,x);

	}
	return 0;
}