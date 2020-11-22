#include <iostream>
#include <vector>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,q,i;
        cin >> n >> q;
        vector <int> a;
        while ( n--)
        {
        	cin >> i;
        	a.push_back(i);
        }
        while (q--)
        {
        	int l,r;
        	cin >> l >> r;
        	long sum=0;
        	for ( i= l-1;i<r;i++)
        	{
        		sum = sum + a.at(i);
        	}
        	cout << sum << endl;
        }
    }

}
