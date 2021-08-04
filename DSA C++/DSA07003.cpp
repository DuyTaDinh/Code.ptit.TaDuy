#include <bits/stdc++.h>
using namespace std;


bool check(string s) {
	stack<char> a;
	for(int i =0  ;s[i]; i++) {
		if (s[i]==')') {
			char c = a.top();
			a.pop();
			bool b=true;
			while(c!='(') {
				if(c == '+' || c == '-' || c == '*' || c == '/'){
					b=false;
				}
				c = a.top();
				a.pop();
			}
			if (b) return true;
		} else a.push(s[i]);
	}
	return false;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(check(s)) cout << "Yes\n";
		else	cout << "No\n";
	}
	return 0;
}



