#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n,i;
        cin >> n;
        int a[n], b[n];
        for(i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a+n);
        for(i = 0; i<n;i++) 
		{
            if (a[i] != b[i]){
                cout <<i+1 << " ";
                break;
            }
        }
        for(i = n-1 ;i >= 0;i--) 
		{
            if (a[i] != b[i]){
                cout << i+1<< " ";
                break;
            }
        }
        cout << endl;
    }
    return 0;
}
