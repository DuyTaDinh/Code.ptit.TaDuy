//#include <bits/stdc++.h>
//using namespace std;
//
//void sieve(int N) {
//    bool isPrime[N+1];
//    isPrime[0] = isPrime[1] = false;
//    for(int i = 2; i <= N;++i) {
//        isPrime[i] = true;
//    }
//    for(int i = 2; i * i <= N; ++i) {
//         if(isPrime[i] == true) {
//             for(int j = i * i; j <= N; j += i)
//                 isPrime[j] = false;
//        }
//    }
//    bool check = false;
//    	for (int i=2; i< N ; i++) {
//			if (isPrime[i] && isPrime[N-i]) {
//				check = true;
//				cout << i << " " << N-i << endl;
//				break;
//			}
//		}
//	if (check == false) cout << "-1" << endl;
//}
//int main() {
//	int t;
//	cin >> t;
//	while ( t--) {
//		int n;
//		cin >>n ;
//    	sieve(n);
//    	
//	}
//	return 0;
//}
#include <bits/stdc++.h> 
using namespace std; 

bool prime(int N){
	if(N < 2) return false;
	for(int i = 2; i <= sqrt(N); i++){
		if(N%i == 0) return false;
	}
	return true;
}

int main() 
{ 
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int i,temp;
		bool check = false;
		for(i = 2; i <= sqrt(n); i++){
			if(prime(i) && prime(n-i)){
				cout << i << " " << n-i << endl;
				check = true;
				break;
			}
		}
		if(!check) cout << "-1" << endl;
	}
	return 0;
}