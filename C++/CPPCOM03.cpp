#include <bits/stdc++.h>
using namespace std;
int OK;
void permutation(int a[],int n)
{
    int i = n-1;
    while (i>=1 && a[i] > a[i+1]) i--;
    if (i==0) {
        OK = 1;
    } else {
        int j=n,t;
        while (a[j] < a[i]) j--;
        t=a[i];a[i]=a[j];a[j]=t;
        int d=i+1,c=n;
        while (d<c) {
            t=a[d];a[d]=a[c];a[c]=t;
            d++;c--;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while (t--) {
        OK = 0;
        int n;
        cin >> n;
        int i , a[n+1];
        for (i = 1; i<=n; i++) {
            a[i] = i;
        }
        while(!OK) {
            for (i = 1; i<=n; i++) {
                cout << a[i];
            }
            cout << " ";
            permutation(a,n);
        }
        cout << endl;
    }
    return 0;
}