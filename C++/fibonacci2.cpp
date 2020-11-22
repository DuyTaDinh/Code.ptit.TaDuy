#include<iostream>
#define ll long long int
using namespace std;
 
bool checkfibonacci(int n)
{
    int a = 0;
    int b = 1;
    if (n==a || n==b) return true;
    int c = a+b;
    while(c<=n)
    {
        if(c == n) return true;
        a = b;
        b = c;
        c = a + b;
    }
    return false;
}
        
int main() {
	int t;
	cin >> t;
	while ( t--)
	{
		int n;
		cin >> n;
		int a[n],i;
		for (i=0;i<n;i++)
		{
			cin >> a[i];
			if (checkfibonacci(a[i]) == true) cout << a[i] << " ";
		}
		cout << endl;
		
	}
	return 0;
}
