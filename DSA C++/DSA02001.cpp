#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, a[11];

void solve(int a[], int n){
	if(n <= 0)	return;
	else{
		int i;
		cout << "[";
		for(i = 0; i < n-1; i++)
			cout << a[i] << " ";
		cout << a[n-1] << "]" << endl;;
		int temp[n-1];
		for(i = 0; i < n; i++)	temp[i] = a[i]+a[i+1];
		solve(temp, n-1);
	}
} 
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++)	
			cin >> a[i];
		solve(a,n);
	}
	return 0;
}



