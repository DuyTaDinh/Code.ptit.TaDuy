#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll a[15];
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		int n=s.size();
		ll res=0;
		for(int i=0;i<n;i++) {
			ll ans=0;
			for(int j = i; j <n;j++) {
				ans= ans*10+s[j]-'0';
				res+=ans;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}

