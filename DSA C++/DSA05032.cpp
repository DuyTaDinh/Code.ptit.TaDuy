//#include<bits/stdc++.h>
//using namespace std;
//#define fasten() ios_base::sync_with_stdio(0); cin.tie(); cout.tie()
//#define ll long long
//#define pb push_back
//const ll Mod = 1e9+7;
//
//void solve(){
//	string str;
//	cin >> str;
//	int n = str.length();
//    int dp[n][n];
//    memset(dp, 0, sizeof(dp));
//    for(int gap = 1; gap < n; gap++){
//        for(int l = 0, h = gap; h < n; l++, h++){
//            dp[l][h] = (str[l] == str[h]) ? dp[l+1][h-1] : min(dp[l][h-1], dp[l+1][h]) + 1;
//        }
//    }
//    cout << dp[0][n-1] << endl;
//}
//
//int main(){
//	fasten();
//	int test;
//	cin >> test;
//	while(test--){
//		solve();
//	}
//	return 0;
//}
#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define MULTIPLE_TEST int t; cin>>t; while(t--)
#define FOR(x,a,b) for (int x=a;x<=b;x++)
#define FOD(x,a,b) for (int x=a;x>=b;x--)
#define ll long long
#define pb push_back
#define MAX INT_MAX
#define pii pair<int,int>
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;

int n;
int dp[1006][1006];
void bai1(string s) {
	memset(dp,0,sizeof(dp));
	int ch = 0; 
	for(int i = 1 ; i<= n; i++) {
		for(int j = 1 ; j<= n; j++) {
			if(s[i-1] == s[n - j] ) dp[i][j]=dp[i-1][j-1] +1;
			else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			ch= max(ch, dp[i][j]);
		}
	}
	cout<<n-ch<<endl;
}
/*
2
abcd
aba
*/
main() {
	SPEED;
	MULTIPLE_TEST {
		string s;
		cin>>s;
		n = s.length();
		bai1(s);
	}
}