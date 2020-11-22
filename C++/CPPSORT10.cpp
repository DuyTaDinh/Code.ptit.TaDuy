#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n,i;
        cin >> n;
        int check[10];
        for( i= 0 ; i<10; i++) {
        	check[i] = 0;
		}
        while (n--) {
        	int temp;
        	cin >> temp;
        	while (temp > 0) {
        		check[temp%10] = 1;
        		temp/=10;
			}
		}
		for ( i= 0; i<10; i++) {
			if (check[i] == 1) {
				cout << i << " ";
			}
		}
		cout << endl;
    }
    return 0;
}
