#include <bits/stdc++.h>
using namespace std;
int n,a[20],k;
int countt;
bool notyet[20];
void init() {
	cin >> n>>k;
	countt= 0;
	for (int i = 0 ; i<n ; i++ ) {
		cin >> a[i];
		notyet[i]=false;
	}
	sort(a, a+n);
}

void print() {
	cout << "[";
	int sum = 0;
	for(int i =0; i < n;i++) {
		if(notyet[i]==true){
			sum += a[i];
			if(sum == k) {
				cout << a[i] <<"] ";
				break;
			}
			cout << a[i] <<" ";
		}	
	}
	
}

bool check() {
	int sum = 0;
	for(int i = 0;i<n;i++){
		if(notyet[i]==true)	sum+=a[i];
	}
	if(sum==k)	return true;
	return false;
}
void sol(int i) {
	if(i==n) {
		if (check()) { countt+=1; print(); }
		return;
	} 
	for(int j = 0; j<=1; j++) {
		if (j==0) notyet[i]=true;
		else notyet[i]=false;
		sol(i+1);
	}
}
int main() {
	int t;
	cin >> t;
	while ( t--) {
		init();
		sol(0);
		if (!countt) cout << "-1";
		cout << endl;
	}
	return 0;
}
