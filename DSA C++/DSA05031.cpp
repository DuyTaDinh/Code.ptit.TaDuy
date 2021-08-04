#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int t,n;
int a[10001];


int main() {
	iostream::sync_with_stdio(false);
	a[1]=1;
	a[2]=2;
	a[3]=3;
	for(int i =4; i <= 10000; i++) {
		a[i]=i;
		for (int j = 1; j<= ceil(sqrt(i)); j++) {
			int x = j*j;
			if (x>i) break;
			else 
				a[i]= min(a[i],a[i-x]+1);
		}
	}
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		cout<< a[n] << endl;

	}
	return 0;
}
