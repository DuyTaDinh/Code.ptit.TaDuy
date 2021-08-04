#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ar array
#define ll long long
#define pb push_back
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

int Stack[1003];
int x;
string a;

int main() {
	SPEED; 
	int idx=-1;
	while(true) {
		cin >> a;
		if(a=="push") {
			cin>>x;
			++idx;
			Stack[idx] = x;
		} 
		if (a == "show"){
			if(idx == -1) {
				cout<<"empty";
				return 0;
			}
			for(int i =0; i<= idx; ++i) {
				cout<<Stack[i]<< " ";
			}
			cout<<endl;
		} 
		if (a == "pop") {
			idx--;
		}
	}
	return 0;
}
