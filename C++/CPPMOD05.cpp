#include<bits/stdc++.h>

using namespace std;

void mod(string num, long a)
{
    long  res = 0;
    for (long i = 0; i < num.size(); i++)
    {
        res = (res*10 + num[i] - '0') %a;
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long m;
        string n;
        cin >> n >> m;
        mod(n,m);
    }
    return 0;
}