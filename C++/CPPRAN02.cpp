#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n,i, j, l,r, check = 1;
        cin >> n ;
        int a[n];
        for(i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cin >> l >> r;
        for(j = l; j < r; ++j) {
            if(a[j+1] < a[j]){
                if (j+1==r){
                    break;
                } else{
                    for(i = j+1; i <= r; ++i) {
                        if(a[i] < a[i+1]){
                            check = 0;
                            break;
                        }
                    }
                }
            }
            if(!check)
                break;
        }
        if (check == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}