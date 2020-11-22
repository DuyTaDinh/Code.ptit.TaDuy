#include<bits/stdc++.h>
using namespace std;
 
bool prime(int n){
    if (n < 2) return false;
    for(int i = 2; i <= sqrt(n); ++i) {
        if (n%i==0)
            return false;
    }
    return true;
}
 
int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n;
		cin >> n;
		if (prime(n) == true) cout << "NO" << endl;
		else
		{
			int i,tong1=0,tong2=0,tong3,j,temp,n1=n,dem;
			while (n1!= 0) {
				temp = n1%10;
				tong1= tong1 + temp;
				n1/=10;
			}
			for( i = 2; i <= n; i++){
    	 	   	dem = 0;
     			while(n % i == 0){
     		        ++dem;
     		        n/=i;
     			}
     			if(dem!=0){
     				tong3 = 0;
     				j=i;
     				while (j!= 0) {
						temp = j%10;
						tong3= tong3 + temp;
						j/=10;
					}
        		}
        		if (dem >= 1) tong2= tong2 + tong3*dem;
   			}
   			if (tong1 != tong2) cout << "NO" << endl;
   			else cout << "YES" << endl;
		}
	}
	return 0;
}

