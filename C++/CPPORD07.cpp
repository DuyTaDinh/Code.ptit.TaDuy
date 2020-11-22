#include <bits/stdc++.h>   
using namespace std; 

void KMax(int arr[], int n, int k) 
{ 
    deque <int> Qi(k); 
    int i; 
    for (i = 0; i < k; ++i) { 
        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]) 
            Qi.pop_back();
        Qi.push_back(i); 
    } 
    for (; i < n; ++i) { 
        cout << arr[Qi.front()] << " "; 
        while ((!Qi.empty()) && Qi.front() <= i - k) 
            Qi.pop_front();
        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]) 
            Qi.pop_back(); 
        Qi.push_back(i); 
    } 
    cout << arr[Qi.front()]; 
} 
int main() 
{ 
	int t;
	cin >> t;
	while (t--) {
		int n,k;
		cin >> n >> k;
		int a[n],i;
		for ( i= 0 ; i< n; i++)
		{
			cin >> a[i];
		}
		KMax(a,n,k);
		cout << endl;
	}
	return 0;
} 
