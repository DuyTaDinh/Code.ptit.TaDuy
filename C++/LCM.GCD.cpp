#include <iostream>
using namespace std;
long long GCD(long long a,long long b) 
{	
	while (a!=b) {
		if (a>b) a=a-b;
		else b=b-a;
		
	}
	return a;
}
int main() {
	int  t;
	cin >> t;
	while (t--)
	{
		long long a,b,gcd,lcm;
		cin >> a >> b;
		gcd = GCD(a,b);
		lcm = (a/gcd)*b;
		cout << lcm << " "<< gcd << endl;
	}
    return 0;
}

