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
void Noi_node(node* &t,int b, char c) {
	if ( c == 'L') t->l = new node(b);
	if (c == 'R') t->r = new node(b);
}

void Them_node(node* t,int a, int b,char c) {
	if(t == null) return;
	if(a== t->data) Noi_node(t,b,c);
	Them_node(t->l,a,b,c);
	Them_node(t->r,a,b,c);
}
bool check;
vector<ii> v;
void Kiem_tra(node* t,int lv) {
	if(t->l == null && t->r == null) {
		v.pb(ii(t->data,lv));
		return;
	}
	if(t->l== null || t->r == null) {
		check = false;
		return;
	}
	Kiem_tra(t->l,lv+1);
	Kiem_tra(t->r,lv+1);
}
main() {
	SPEED;
	MULTIPLE_TEST {
		int n;
		v.clear();
		cin>>n;
		node* t = null;
		while(n--) {
			int a,b;
			char c;
			cin>>a>>b>>c;
			if (t == null) {
				t= new node(a);
				Noi_node(t,b,c);
			} else 	Them_node(t,a,b,c);
		}
		check = true;
		Kiem_tra(t,0);
		int tmp = v[0].second;
		for(int i = 1; i< v.size(); i++) {
			if(tmp != v[i].second) {
				check = false;
				break;
			}
		}
		(check) ? cout<<"Yes"<<endl : cout<<"No"<<endl;

	}
}
