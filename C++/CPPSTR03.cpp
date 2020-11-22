#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        int a = 0,i;
        for(i = 0; i< n.size(); i++) {
            a = (2*a + (n[i] - '0')) % 5;
        }
        if(a == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}