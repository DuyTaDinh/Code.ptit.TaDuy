#include <bits/stdc++.h>
using namespace std;

void merge(int array[], int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];
	
	for (int i = 0; i < n1; i++)
		L[i] = array[l + i];
	for (int j = 0; j < n2; j++)
		R[j] = array[m + 1 + j];
	int i = 0;
	int j = 0;
	int k = l;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			array[k] = L[i];
			i++;
		}
		else {
			array[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		array[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		array[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int array[],int l,int r){
	if(l>=r){
		return;
	}
	int m =l+ (r-l)/2;
	mergeSort(array,l,m);
	mergeSort(array,m+1,r);
	merge(array,l,m,r);
}

int main()
{
	int t;
	cin >> t;
	while ( t--) {
		int n;
		cin >> n;
		int a[n];
		for ( int i= 0 ; i< n; i++) {
			cin >> a[i];
		}
		mergeSort(a, 0,n-1);
		for (int i = 0 ; i< n; i++)  {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

