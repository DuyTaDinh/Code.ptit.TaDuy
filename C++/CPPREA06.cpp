#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n,i,count = 0;
        cin >> n;
        int a[n];
        for(i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for(i = 0; i < n; ++i) {
            if (a[i] == a[i+1] && a[i] != 0){
                a[i]*=2;
                a[i+1]=0;
            }
        }
        for(i = 0; i < n; ++i) {
            if (a[i]){
                cout << a[i] << " ";

            } else count++;
        }
        for(i = 1; i <= count; ++i) {
                cout << "0 ";
        }
        cout << endl;
    }
}