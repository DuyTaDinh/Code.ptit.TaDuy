#include <bits/stdc++.h>
using namespace std;

#define FILL(a,x) memset(a, x, sizeof(a))
#define CLEAR(arr,rag) for(int i=0; i<= rag; i++) arr[i].clear();
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MULTIPLE_TEST int tes; cin>>tes; while(tes--)
#define FOR(x,iFi,iLa) for(int x=(iFi);x<=((int)iLa);x++)
#define FOD(x,iFi,iLa) for(int x=(iFi);x>=((int)iLa);x--)
#define pb push_back
#define null NULL
#define mp make_pair
typedef vector<bool> vb;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
const ll mod = (ll)1e9 + 7;

main() {
	SPEED;
	MULTIPLE_TEST {
		string s;
		cin>>s;
		stack<int> num;
		stack<char> cha;
		string tmp="", res="";
		for(int i = 0 ; i< s.length(); i++) {
			int count = 0;
			if(isdigit(s[i])){
				while(isdigit(s[i])) {
					count = count*10 + s[i] - '0';
					i++;
				}
				i--;
				num.push(count);
			}
			else if (s[i] == '[') {
				if(isdigit(s[i-1])) {
					cha.push(s[i]);
				} else {
					num.push(1);
					cha.push(s[i]);
				}
			}
			else if (s[i] == ']') {
				tmp =""; 
				count = 0;
				if (!num.empty()) {
					count = num.top(); num.pop();
				} 
				while(!cha.empty() && cha.top() != '[') {
					tmp = cha.top() + tmp;
					cha.pop();
				}
				if (!cha.empty() && cha.top() == '[') {
					cha.pop();
				}
				for(int j = 0 ; j < count; j++) {
					res = res + tmp;
				}
				for(int j = 0 ; j< res.length(); j++) {
					cha.push(res[j]);
				}
				res ="";
			} 
			else cha.push(s[i]);
		}
		while(!cha.empty()) {
			res=cha.top() + res;
			cha.pop();
		}
		cout<<res<<endl;
	}
}
