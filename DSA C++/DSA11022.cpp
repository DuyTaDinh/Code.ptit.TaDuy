#include <bits/stdc++.h>
using namespace std;

#define FILL(a,x) memset(a, x, sizeof(a))
#define CLEAR(arr,rag) for(int i=0; i<= rag; i++) arr[i].clear();
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MULTIPLE_TEST int tes; cin>>tes; while(tes--)
#define FOR(x,iFi,iLa) for(int x=(iFi);x<=((int)iLa);x++)
#define FOD(x,iFi,iLa) for(int x=(iFi);x>=((int)iLa);x--)
#define pb push_back
typedef vector<bool> vb;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
const ll mod = (ll)1e9 + 7;

int dem;
struct node{
	int data;
	node* l;
	node* r;
	node(int x) {
		data = x;
		l = NULL;
		r = NULL;
	}
};

void Them_node(node* &t,int x) {
	if (t == NULL) {
		t = new node(x);
	} else {
		if (x< t->data) Them_node(t->l,x);
		if(x > t->data) Them_node(t->r,x);
	}
}
void Duyet_NLR(node* &t) {
	if(t!= NULL) {
		if(t->l == NULL && t->r == NULL) ;
		else dem++;
		Duyet_NLR(t->l);
		Duyet_NLR(t->r);
	}
}

main() {
	SPEED;
	MULTIPLE_TEST {
		dem = 0;
		int n;
		cin>>n;
		node* t = NULL;
		while(n--) {
			int x;
			cin>>x;
			Them_node(t,x);
		}
		Duyet_NLR(t);
		cout<<dem<<endl;
	}
}