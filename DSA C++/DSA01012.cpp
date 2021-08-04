#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
void sol()
{
    if (n <= 0)
        return;
    vector <string> a;
    a={"0","1"};
    int i, j;
    for (i = 2; i < (1<<n); i = i<<1)
    {
        for (j = i-1 ; j >= 0 ; j--)
            a.push_back(a[j]);
        for (j = 0 ; j < i ; j++)
            a[j] = "0" + a[j];
        for (j = i ; j < 2*i ; j++)
            a[j] = "1" + a[j];
    }
    for (i = 0 ; i < a.size() ; i++ )
        cout << a[i] << " ";
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		sol();
		cout << endl;
	}
	return 0;
}
