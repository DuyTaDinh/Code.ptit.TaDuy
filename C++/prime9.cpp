#include <iostream>
#include <bits/stdc++.h>
using namespace std; 

void generatePrimeFactors(int n) 
{ 
    if (n%2 == 0) 
    {
    	int temp = 0;
    	while (n%2==0) 
    	{
    		temp = temp + 1;
    		n>>=1;
		}
		cout << 2 << " " << temp << " ";
	}
	for (int i = 3; i<=sqrt(n); i = i+2) 
	{
		if (n%i == 0) 
		{
			int temp = 0;
			while (n%i==0) 
			{
				temp = temp + 1;
    			n/=i;
			}
			cout << i << " " << temp << " ";
		}
	}
	if (n > 2) 
		cout << n << " " << 1;
    cout << endl;
} 

int main() 
{ 
    int t;
	cin >> t;
	while (t--)
	{
    	int N;
    	cin >> N;
		generatePrimeFactors(N); 
	}
    return 0; 
} 
