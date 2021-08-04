#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char a[100];
		int n;
		cin >> n;
		cin >> a;
		int s = strlen(a);
		cout << n <<" ";
		if(next_permutation(a,a+s))	
			cout <<a <<endl;
		else	cout << "BIGGEST" <<endl;
	} 
	return 0;
}



