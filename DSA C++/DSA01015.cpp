#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		queue <ll> q;
		q.push(9);
		while(!q.empty()){
			ll tmp = q.front(); q.pop();
			if(tmp % n == 0){
				cout << tmp << endl;
				break;
			}
			else{
				q.push(tmp*10);
				q.push(tmp*10+9);
			}
		}
	}
	return 0;
}

//#include <bits/stdc++.h>
//using namespace std;
//
//#define ull unsigned long long
//#define ll long long
//
//ull binary(ull n) {
//    ull res = 0;	
//    ull multiplier = 1;
//    while (n) {
//        res += (n&1)*multiplier;
//        n >>= 1;
//        multiplier *= 10;
//    }
//    return res;
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    ll t;
//    cin >> t;
//    while (t--) {
//        ull n;
//        cin >> n;
//
//        ull cnt = 1;
//        while (9*binary(cnt) % n != 0) {
//            cnt++;
//        }
//
//        cout << 9*binary(cnt) << endl;
//    }
//}


