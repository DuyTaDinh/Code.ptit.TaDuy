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

void Them_node(node* &t,int x) {
	if(t== null) {
		t = new node(x);
	} else {
		if(x < t->data) Them_node(t->l,x);
		if(x > t->data) Them_node(t->r,x);
	}
}
int depth;
void Kiem_tra(node* t,int lv) {
	if(t!=null) {
		depth = max(depth,lv);
		Kiem_tra(t->l,lv+1);
		Kiem_tra(t->r,lv+1);
	}
}

main() {
	SPEED;
	MULTIPLE_TEST {
		int n;
		cin>>n;
		node* t = null;
		while(n--) {
			int x;
			cin>>x;
			Them_node(t,x);
		}
		depth = 0;
		Kiem_tra(t,0);
		cout<<depth<<endl;
	}
}
