#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		string s;
		long long n,len,tmp;
		cin >> s >> n;
		len = s.length();
		while(len<n){
			tmp=len;
			while(tmp*2<n) tmp*=2;
			n-=(tmp+1);// minus half plus one front; 
			if(n==0) n=tmp;// Draw can simulate what
		} 
		cout << s[n-1] << endl;
	}
	return 0;
}