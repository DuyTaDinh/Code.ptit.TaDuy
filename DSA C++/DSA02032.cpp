#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int n, k;
int a[22];
vector< vector<int> > res;
void init(){
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
}
void printf(){
	for(int i = 0; i < res.size(); i++){
		cout << "{";
		for(int j = 0; j < res[i].size()-1; j++)	cout << res[i][j] << " ";
		cout << res[i][res[i].size()-1]	 << "} ";
	}
}
void solution(int i, int sum, vector<int> v){
	if(sum > k)	return;
	if(sum == k){
		res.pb(v);
		return;
	}
	for(int j=i ; j < n; j++){
		if(sum + a[j] <= k){
			v.pb(a[j]);
			solution(j, sum+a[j],v);
			v.pop_back();
		}
	}
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		vector <int> v;	v.clear();
		res.clear();		
		solution(0, 0,v);
		if(res.size() == 0)	cout << "-1"<<endl;
		else {
			cout<<res.size()<<" ";
			printf();
			cout<<endl;
		}
		
	}
	return 0;
}

	
