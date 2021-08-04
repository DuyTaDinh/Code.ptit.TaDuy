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


string s;
int n, a[20];
vector<ii> v;
stack<int> st;
vector<string> res;

void Try(int i) { //de quy
	for(int j = 0 ; j<= 1; j++) {
		a[i] = j;
		if(i == n-1) {   
			string s1 = "";
			int check[202] = {0};
			for(int k = 0 ; k< n; k++) {
				if(!a[k]) check[v[k].first] = check[v[k].second] = 1;  //khong lay cap ngoac
			}
			for(int k = 0; s[k] ; k++) {
				if(!check[k]) s1+=s[k];
			}
			if(s1!= s) res.pb(s1);
		} else {
			Try(i+1);
		}
	}
}

main() {
	SPEED;
	cin >> s;
	for(int i = 0 ; i < s.size() ; i++) {
		if(s[i] == '(') st.push(i); 
		else if(s[i] == ')') {
			v.pb(ii(st.top(),i)); // luu vi tri cac cap dong mo ngoac
			st.pop();
		}
	}
	n = v.size();
	Try(0);
	sort(res.begin(),res.end()); // sap xep
	cout<<res[0]<<endl;
	for(int i = 1; i< res.size(); i++) {
		if(res[i] != res[i-1]) cout<<res[i]<<endl; //xau khac nhau
	}
}
