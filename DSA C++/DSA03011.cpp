#include <bits/stdc++.h>
using namespace std;
const long mod = (long)1e9 + 7;

template <typename T>void re(T& x)
{
    x = 0; T f = 1;
    char ch = getchar();
    while (!isdigit(ch)) f = ch == '-' ? - f : f, ch = getchar();
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar();
    x *= f;
}

template<typename T> void wr(T n) 
{ 
	bool neg = 0; 

	if (n < 0) 
		n *= -1, neg = 1; 

	char snum[20]; 
	int i = 0; 
	do
	{ 
		snum[i++] = n % 10 + '0'; 
		n /= 10; 
	} 

	while (n); 
	--i; 

	if (neg) 
		putchar('-'); 

	while (i >= 0) 
		putchar(snum[i--]); 

	putchar('\n'); 
} 
int n,t;
long a[1000000];
main() {
	re(t);
	while (t--) {
		re(n);
		for (int i = 0; i <n; i++) re(a[i]);
		priority_queue<int, vector<int>, greater<int>> e(a,a+n); 
		long res = 0; 
		while(e.size() > 1) {
			long t1,t2;
			t1=e.top(); e.pop();
			t2=e.top(); e.pop();
			res= (res+t1+t2) % mod;
			e.push((t1+t2) % mod);
		}
		wr(res);
	}
}