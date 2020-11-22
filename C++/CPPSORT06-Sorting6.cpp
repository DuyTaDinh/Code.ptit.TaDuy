#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t--) {
		int n;
		cin >> n;
		int i,count1 = 0 , count2 = 0;
		while (n--) {
			cin >> i;
			switch (i) {
				case 0:
					cout << "0 ";
					break;
				case 1:
					count1++;
					break;
				case 2:
					count2++;
					break;
				default:
					break;
			}
		}
		while (count1--) cout << "1 ";
		while (count2--) cout << "2 ";
		cout <<endl;
	}
	return 0;
}
