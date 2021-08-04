#include <bits/stdc++.h>
using namespace std;
int n, k, a[100];
bool stop;
vector<string> v;
void init(){
	cin >> n;
	k = 1;
	a[k]=n;
	
}

void res(){
	string tmp ="";
	tmp+="(";
	for(int i = 1; i <= k; i++){
		tmp+=to_string(a[i]);
		if(i < k)	tmp+=" ";
		else	tmp+=") ";
	}
	v.push_back(tmp);
}

void sinh(){
	int i = k;
	while(i >= 0 && a[i]==1)	i--; 
	if(i==0)	stop=true;
	else{
		a[i]-=1; 
		int d = k-i+1; 
		k=i; 
		for(int j = i+1; j <= i+d/a[i]; j++)	
			a[j]=a[i]; 
		k+=d/a[i];
		if(d%a[i] >0){
			k++;
			a[k]=d%a[i];
		}
	}
}
int main(){
	iostream::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		v.clear();
		init();
		stop=false;
		while(!stop){
			res();
			sinh();
		}
		cout << v.size()<<endl;
		for(int i = 0 ; i< v. size(); i++) cout<<v[i];
		cout<<endl;
	}
	return 0;
}

