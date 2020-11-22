#include <bits/stdc++.h>
using namespace std;
int findMaxAverage(int arr[], int n, int k) 
{ 
    int *csum = new int[n]; 
    csum[0] = arr[0]; 
    for (int i=1; i<n; i++) 
       csum[i] = csum[i-1] + arr[i]; 
    int max_sum = csum[k-1], max_end = k-1; 
    for (int i=k; i<n; i++) 
    { 
        int curr_sum = csum[i] - csum[i-k]; 
        if (curr_sum > max_sum) 
        { 
            max_sum = curr_sum; 
            max_end = i; 
        } 
    } 
    delete [] csum; 
    return max_end - k + 1; 
} 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i,j,k;
        cin >> n >> k;
        int a[n], temp;
        for ( i= 0; i <n ; i++)
        {
            cin >> a[i];
        }
        temp = findMaxAverage(a, n, k); 
        for ( i= temp; i< temp +k ; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;

    }
    return 0;
}
