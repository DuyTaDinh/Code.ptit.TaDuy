#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,i,j,temp,maxLength = 1;
        cin >> n;
        vector <int> a,b;
        for ( i= 0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        for ( i= 0; i<n; i++)
        {
            cin >> temp;
            b.push_back(temp);
        }
        for ( i= 0 ;i <n-1; i++)
        {
            int sumA = a[i];
            int sumB = b[i];
            for ( j= i+1; j< n; j++)
            {
                sumA = sumA + a.at(j);
                sumB = sumB + b.at(j);
                if (sumA == sumB && j-i+1 > maxLength) maxLength = j - i + 1;
            }
        }
        cout << maxLength << endl;
    }

}
