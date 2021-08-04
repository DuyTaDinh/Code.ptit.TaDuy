#include <bits/stdc++.h>
using namespace std;
int a[20];
bool last(int a[],int n,int k){
	for(int i=1 ; i<=k ; i++){
		if(a[i]!=n-k+i)	return false;
	}
	return true;
}

void gentnext();

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		for(int i = 1; i <= k ; i++)	
			cin >> a[i];
		if(last(a,n,k))	cout << k;
		else{
			int x;
			for(int i = k; i >= 1; i--){ 
				if(a[i] != n-k+i){ 
					a[i]++; 
					x = a[i+1]-a[i]; 	
					if(x < 0)	x = 1; 
					break;
				}
			}
			cout << x;
		}
		cout << endl;
	}
	
}




