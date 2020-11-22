#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int OK,n,str[30];
void xuly()
{
	for(int i = 1 ; i<= n; i++)
	{
		cout << str[i];
	}
	cout << " ";
}
void sinh()
{
	int i = n;
	while (str[i]) {
		str[i]=0;
		i--;
	}
	if (i==0) OK=1;
	else str[i] = 1;
}
int main() {
	int t;
	cin >> t;
	while (t--) 
	{
		cin >> n;
		OK=0;
		for(int i = 1; i<=n;i++){
			str[i] = 0;
		}
		while(!OK) {
			xuly();
			sinh();
		}
		cout << endl;
	}
	return 0;
}

