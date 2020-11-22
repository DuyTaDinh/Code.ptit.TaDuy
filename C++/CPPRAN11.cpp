#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,i,temp;
        cin >> n;
        vector <int> a;
        for ( i= 0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        int min = 10000000;
        sort(a.begin(), a.end());
        for ( i= 0 ;i <n-1; i++)
        {
            if (a.at(i+1) - a.at(i) < min ) min = a.at(i+1) - a.at(i);
        }
        cout << min << endl;
    }

}
