#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	string a,b;
	cin >> a >> b;
	int i,mina=0,minb=0,maxa=0,maxb=0;
	for (i= 0; i< a.size(); i++) {
		if (a[i] == '6' || a[i] == '5') {
			maxa=maxa*10+6;
			mina=mina*10+5;
		}
		else {
			maxa=maxa*10+(a[i]-'0');
			mina=mina*10+(a[i]-'0');
		}
	}
	for (i= 0; i< b.size(); i++) {
		if (b[i] == '6' || b[i] == '5') {
			maxb=maxb*10+6;
			minb=minb*10+5;
		}
		else {
			maxb=maxb*10+(b[i]-'0');
			minb=minb*10+(b[i]-'0');
		}
	}
	cout << mina+minb << " " << maxa+maxb;
	return 0;
}
