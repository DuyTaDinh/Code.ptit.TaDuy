#include <bits/stdc++.h>

using namespace std;

int a[100], b[1000000], sum[100];
int tong,s,n,k;
bool ok;

void Check(){
	ok = 1;
	for(int i=1;i<=k;i++)	sum[i]=0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= k; j++){
			if(b[i] == j){
				sum[j]+=a[i];
				continue;
			}
		}
	}
	for(int i = 1;i <= k ; i++){
		if(sum[i] != s){
			ok = 0;
			break;
		}
	}
}

void next(int j){
	for(int i = 1; i <= k; i++){
		b[j] = i;
		if(j == n)	Check();
		else {
			if(ok == 1) {
				cout<<1;
				return;
			}
			next(j+1);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		tong = 0;
		ok = 1;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			tong+=a[i];
		}
		if(tong % k==0){
			s = tong/k;
			next(1);
			if(!ok)	cout << "0" ;
		} else cout << "0";
		cout << endl;
	}
	return 0;
}



