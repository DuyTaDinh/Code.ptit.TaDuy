#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int a[30],n,size;
vector <string> s;
void solve(int m){
		if(size<m){
			string sub="";
			for(int i=1; i<=size; i++){
				if(!a[i]) sub+="6";
				else sub+="8";
			}
			s.pb(sub);
			return;
		}
		for(int i=0; i<=1; i++){
			a[m]=i;
			solve(m+1);
		}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		s.clear();
		cin>>n;
		for(int i=1; i<=n; i++){
			size=i;
			solve(1);
		}
		cout<<s.size()<<endl;
		for(int i = 0; i< s.size(); i++) cout<<s[i]<<" ";
		cout<<endl;
	}
	return 0;
}