#include <bits/stdc++.h>
using namespace std;

#define FILL(a,x) memset(a, x, sizeof(a))
#define CLEAR(arr,rag) for(int i=0; i<= rag; i++) arr[i].clear();
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MULTIPLE_TEST int tes; cin>>tes; while(tes--)
#define FOR(x,iFi,iLa) for(int x=(iFi);x<=((int)iLa);x++)
#define FOD(x,iFi,iLa) for(int x=(iFi);x>=((int)iLa);x--)
#define pb push_back
#define fi first
#define se second
#define null NULL
#define mp make_pair
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
const ll mod = (ll)1e9 + 7;

struct node{
	int data;
	node* l;
	node* r;
	node(int x) {
		data = x;
		l = null;
		r = null;
	}
};

void Them_node(node* &t, int x) {
	if( t== null) {
		t = new node(x);
	} else {
		if (t->data > x) Them_node(t->l,x);
		if(t->data < x) Them_node(t->r,x);
	}
}

vector<int> v;
void Kiem_tra(node* t) {
	if(t!=null) {
		Kiem_tra(t->l);
		v.pb(t->data);
		Kiem_tra(t->r);
	}
}
main() {
	SPEED;
	MULTIPLE_TEST {
		node* t = null;
		int n;
		v.clear();
		cin>>n;
		int a[n];
		for(int i = 0 ; i< n; i++) {
			cin>>a[i];
			Them_node(t,a[i]);
		}
		Kiem_tra(t);
		int check = 1;
		for(int i = 0 ; i< n; i++) {
			if(a[i] != v[i]) {
				check = 0;
			}
		}
		cout<<check<<endl;
	}
}
