#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		char n[100];
		cin >> n;
		int len = strlen(n)-1;
		if (n[len]  ==  '6' && n[len -1] == '8')
		{
			cout << "1" << endl;
		}
		else cout << "0" << endl;
	}
	return 0;
}

