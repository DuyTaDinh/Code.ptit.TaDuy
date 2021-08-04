#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll t,a[1000000],dem;
main(){
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		dem=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+1+n);
		for(int i=2;i<=n;i++){
			if(a[i]==a[i-1]) continue;
			dem+=a[i]-a[i-1]-1;
		}
		cout<<dem<<endl;
	}
	return 0;
}
