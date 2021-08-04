#include<bits/stdc++.h>
using namespace std;

int n,a[20],i;

void out() {
	for(int i = 0; i< n; i++) {
		(a[i]) ? cout<<'H' : cout<<'A';
	}
	cout<<endl;
}
int check() {
	if(a[0] == 0 || a[n-1] == 1) return 0;
	for(int i = 1; i < n; i++) {
		if(a[i] && a[i-1]) return 0;
	}
	return 1;
}

int main() {
	ios::sync_with_stdio(false);
	int t; cin >> t;
	while(t--) {
		cin>>n;
		for(int i=0;i<n;i++) a[i]=0;
		bool OK = false;
		while (!OK) {
			if(check())	out();
			i = n-1;
			while (i>=0 && a[i] == 1) a[i--] = 0;
			if (i==-1) OK = true;
			else {
				a[i] = 1;
			}
		}
	}
}

//#include<bits/stdc++.h>
//using namespace std;
//
//int n,a[20];
//
//void out() {
//	for(int i = 1; i<= n; i++) {
//		(a[i]) ? cout<<'H' : cout<<'A';	
//	}
//	cout<<endl;
//}
//int check() {
//	if(a[1] == 0 || a[n] == 1) return 0;
//	for(int i = 2; i < n; i++) {
//		if(a[i] && a[i-1]) return 0;
//	}
//	return 1;
//}
//void Try(int i) {
//	int j;
//	for(j = 0; j<=1; j++) {
//		a[i]=j;
//		if(i==n) {
//			if(check()) out();
//		} else Try(i+1);
//	}
//}
//int main() {
//	ios::sync_with_stdio(false);
//	int t; cin >> t;
//	while(t--) {
//		cin>>n;
//		for(int i=0;i<=n;i++) a[i]=0;
//		Try(1);
//	}
//}