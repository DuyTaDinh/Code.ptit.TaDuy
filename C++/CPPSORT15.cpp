#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
	cin >> t;
    while(t--){
        int n, k,i,j; 
		cin >> n >> k;
		int a[n],count = 0;
        for(i=0; i<n; i++){
            cin >> a[i]; 
        }
        sort(a, a+n);
        for (i = 0;i < n ; i++) {
        	for (j = i+1; j<n; j++)
        		if (a[j] - a[i] <k) {
        			count = count + 1;
				} else break;
		}
		cout << count << endl;
    }
    return 0;
}
