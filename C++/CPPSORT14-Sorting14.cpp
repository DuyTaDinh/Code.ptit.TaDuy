#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void solve()
{

}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,i,min,max,counta=0;
		cin >> n;
		set <int> a;
		while (n--)
		{
			cin>> i;
			a.insert(i);
		}
		min = *a.begin();
		max = min;
		for (int i: a)
		{
			if (i < min) min = i;
			if (i > max) max = i;
		}
		for (int i = min + 1; i< max; i++)
		{
			if (a.count(i) == 0) counta++;
		}
		cout << counta << endl;
	}
	return 0;
}

