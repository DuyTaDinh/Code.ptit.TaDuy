#include <bits/stdc++.h>
using namespace std;
int n,k, a[20];
void it();
bool last();
void display();
void gentnext();
char al[27];
int main(){
	int t;
	cin >> t;
	int tmp=1;
	for(char i = 'A'; i<= 'Z'; i++) {
		al[tmp++]=i;
	}
	while(t--){
		cin >> n >> k;
		it();
		display();
		while(!last()){
			gentnext();
			display();
		}
		cout << endl;
	}
	
}

void it(){
	for(int i=1 ; i<=k ; i++){
		a[i]=i;
	}
}

bool last(){
	for(int i=1 ; i<=k ; i++){
		if(a[i]!=n-k+i)		return false;
	}
	return true;
}

void display(){
	for(int i=1; i<=k ; i++){
		cout <<al[a[i]];
	}
	cout<<endl;
}

void gentnext(){
	for(int i = k; i >= 1; i--){
		if(a[i] != n-k+i){
			a[i]++;
			for(int j = i+1; j <= k ; j++)	a[j]=a[j-1]+1;
			break; 
		}
	}
}


