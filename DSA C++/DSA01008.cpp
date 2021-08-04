#include <bits/stdc++.h> 
using namespace std; 
int i,j;
void display(int a[],int n) {
	for (i=1; i<=n; i++) {
		cout << a[i];
	}
	cout << endl;
}
bool last(int a[],int k){
	for(i = 1; i <= k; i++){
		if(a[i]!=1)	return false;
	}	
	return true; 
}
bool check(int a[],int n,int k) {
	int dem=0;
	for (i = 1; i<=n; i++) {
		if (a[i] == 1) dem++;
	}
	if (dem==k) return true;
	return false;
}
void next(int a[],int n) {
	for (i= n; i>=1; i--) {
		if (a[i] == 0) {
			a[i]=1;
			for (j = i+1;j<= n; j++) a[j]=0;
			break;
		}
	}
	
}


int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n,k;
		cin >> n>>k;
		int a[n];
		for ( i= 1; i<=n-k; i++) 
			a[i] = 0;
		for (i = n-k+1; i<=n; i++) 
			a[i] = 1;
			
		display(a,n);	
		while (!last(a,k)) {
			next(a,n);	
			if (check(a,n,k)) display(a,n);		
		}
	}
	return 0;
}
