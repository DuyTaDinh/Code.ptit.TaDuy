#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k;
vector <string> s;
char a[20];

bool check() {
	int countA=0;
	for (int i =1; i<=n; i++) {
		if (a[i] == 'A') {
			int count=1;
			for (int j=i+1; j<i+k; j++) {
				if (a[j] == 'A') count++;
				else break;
			}
			if (count==k) countA++;
		}	
	}
	if (countA==1) return true;
	return false;
}
void add() {
	string temp="";
	for (int i = 1; i<= n; i++) temp+=a[i];
	s.push_back(temp);
}
void print() {
	cout << s.size() << endl;
	for ( int i=0; i< s.size(); i++) {
		cout  << s[i] << endl;
	}
}
void sol(int t) {
	if (t>n) {
		if (check()) add();
		return;
	}
	for (int i = 'A';i <= 'B'; ++i ) {
		a[t]= i;
		sol(t+1);
	}
	
}
int main() {
	cin >> n >> k;
	sol(1);
	print();
	return 0;
}
