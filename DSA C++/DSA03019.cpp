#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long

int main() {
	SPEED; int t; cin >> t;
	while (t--) {
		ll tu,mau;
		cin>>tu>>mau;
		if(tu == 1) {
			cout<<"1/"<<mau<<endl;
			continue;
		}
		if(mau%tu==0) {
			cout<<"1/"<<mau/tu<<endl;
			continue;
		}
		while(mau%tu) {
			ll tmp = mau/tu+1;
			cout<<"1/"<<tmp<<" + ";
			tu = tu*tmp - mau;
			mau = mau*tmp;
		}
		cout<<"1/"<<mau/tu<<endl;
	}
	return 0;
}