#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		string n;
        cin >> n;
        int i = n.size()-1;
        while(n[i] == '1')
            n[i--] = '0';
        if(i != -1)
            n[i] = '1';
        cout << n << endl;
	}

	return 0;
}
