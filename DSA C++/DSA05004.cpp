#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	iostream::sync_with_stdio(false);
	int n,maxx=0;
	cin >> n;
	int a[n];
	int L[n]={1};
	for(auto &i :a) cin>>i;
	for(int i = 1 ; i<n;i++) {
		for(int j = 0 ;j<i;j++) 
			if(a[i] > a[j]) L[i] = max(L[i],L[j]+1);
		maxx=max(L[i],maxx);
	}
	cout << maxx;
	return 0;
}
//#include <bits/stdc++.h> //https://vietcodes.github.io/algo/lis
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(false); cin.tie(0);
//
//    int n; cin >> n;
//    vector<int> a(n);
//    for (int &x: a) cin >> x;
//
//    vector<int> f(n+1), b(n+1, INT_MAX);
//    b[0] = INT_MIN;
//    int result = 0;
//    for (int x: a) {
//        int k = lower_bound(b.begin(), b.end(), x) - b.begin();
//        b[k] = x;
//        result = max(result, k);
//    }
//
//    cout << result;
//    return 0;
//}
