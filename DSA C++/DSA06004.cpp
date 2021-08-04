//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	int t;
//	cin >> t;
//	while ( t--) {
//		int n,m;
//		cin >> n >> m;
//		vector<int> a;
//		set<int> h,g; 
//		int temp,i=n;
//		while (i--) {
//			cin >> temp;
//			a.push_back(temp);
//		}
//		i=m;
//		while (i--) {
//			cin >> temp;
//			a.push_back(temp);
//		}
//		for (i = 0; i < n+m; i++) 
//    	{ 
//        	if (h.find(a[i]) == h.end()) 
//           		h.insert(a[i]); 
//        	else
//            	g.insert(a[i]); 
//    	} 
//    	for (auto &i : h) {
//    		cout << i << " ";
//		}
//		cout << endl;
//		for (auto &i : g) {
//    		cout << i << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

#include <bits/stdc++.h>
using namespace std;



int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,m;
		cin >> n>> m;
		int a[n],b[m],i,j;
		for ( i= 0 ; i<n; i++) {
			cin >> a[i];
		}
		for ( j= 0 ; j<m; j++) {
			cin >> b[j];
		}
		vector <int> c;
		i =0; j=0;
		while (i <n && j <m) {
			if (a[i] < b[j]) 
				cout << a[i++] << " ";
			else if (a[i] > b[j]) 
				cout << b[j++] << " ";
			else {
				c.push_back(a[i]);
				cout << a[i++] << " ";
				j++;
			}
		}
		while (i < n) 
        	cout << a[i++] << " "; 
  		while (j < m) 
        	cout << b[j++] << " "; 
		cout << endl;
		for (auto &i:c) {
			cout << i << " ";
		}
		cout << endl; 
			
	}	
	return 0;
}
