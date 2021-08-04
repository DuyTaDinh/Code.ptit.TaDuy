#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int n, k;
int a[22];
vector< vector<int> > res;
vector<int> v;
void init(){
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
}
void printf(){
	for(int i = 0; i < res.size(); i++){
		cout << "[";
		for(int j = 0; j < res[i].size()-1; j++)	cout << res[i][j] << " ";
		cout << res[i][res[i].size()-1]	 << "]";
	}
}
void solution(int i, int sum){
	if(sum > k)	return;
	if(sum == k){
		res.pb(v);
		return;
	}
	for(int j=i ; j < n; j++){
		if(sum + a[j] <= k){
			v.pb(a[j]);
			solution(j, sum+a[j]);
			v.pop_back();
		}
	}
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		init(); 
		v.clear();
		res.clear();		
		solution(0, 0);
		if(res.size() == 0)	cout << "-1"<<endl;
		else {
			printf();
			cout<<endl;
		}
		
	}
	return 0;
}

	
