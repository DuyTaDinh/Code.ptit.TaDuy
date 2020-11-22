#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<long> arr;
        long n, temp, i, j, res;
        cin >> n;
        for( i = 0; i < n; i++) {
            cin >> temp;
            arr.push_back(temp);
        }
        res = arr[0] + arr[1];
        for(i = 0; i < arr.size() - 1; i++) {
            for( j = i + 1; j < arr.size(); j++) {
                if( abs(arr[i]+arr[j]) < abs(res)) 
                    res = arr[i] + arr[j];
            }
        }
        cout << res << endl;
    }

}