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
#define mp make_pair;
typedef vector<bool> vb;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
const ll mod = (ll)1e9 + 7;

//struct node {
//    int value;
//    node* left;
//    node* right;
//    node(int c):value(c),left(null),right(null){};
//};
//
//node* build_tree(){
//    int n;
//    cin>>n;
//    int a,b;
//    char c;
//    map <int,node*> m;
//    map <node*,node*> parent;
//    for(int i=0;i<n;i++)
//    {
//        cin>>a>>b>>c;
//        node* p1 = new node(a);
//        node* p2 = new node(b);
//        if(m.find(a)!=m.end()) p1=m[a];
//        if(c=='L') p1->left=p2;
//        else p1->right=p2;
//        parent[p2]=p1;
//        if(parent.find(p1)==parent.end()) parent[p1]==null;
//        m[a] = p1;
//        m[b] = p2;
//    }
//    map <node*,node*>::iterator it;
//    for(it=parent.begin();it!=parent.end();it++)
//    {
//        if((*it).second==null) return (*it).first;
//    }
//}
//bool ok;
//void getResult(node* p1,node* p2)
//{
//    if(p1==null&&p2==null) return;
//    if(p1==null || p2==null)
//    {
//        ok=false;
//        return;
//    }
//
//        ok &= p1->value== p2->value;
//        getResult(p1->left,p2->left);
//        getResult(p1->right,p2->right);
//
//}
//
//main() {
//	SPEED;
//	MULTIPLE_TEST {
//		node* tree1=build_tree();
//        node* tree2=build_tree();
//        ok=true;
//        getResult(tree1,tree2);
//        if(ok) cout<<"1";
//        else cout<<"0";
//        cout<<endl;
//
//	}
//}

bool check;
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

void Noi_node(node* &t,int b, char c){
	if(c == 'L') t->l = new node(b);
	if(c == 'R') t->r = new node(b);
}
void Them_node(node* t, int a,int b, char c) {
	if(t == NULL) {
		return;
	} 
	if(a == t->data) Noi_node(t,b,c);
	Them_node(t->l,a,b,c);
	Them_node(t->r,a,b,c);
}

void Kiem_tra(node* t1, node* t2) {
	if (t1 == NULL && t2 == NULL ) return;
	if (t1 == NULL || t2 == NULL) {
		check = false;
		return;
	}
	if(t1->data == t2->data) check = true;
	else check = false;
	Kiem_tra(t1->l,t2->l);
	Kiem_tra(t1->r,t2->r);
}
main() {
	SPEED;
	MULTIPLE_TEST{
		int n1,n2;
		cin>> n1;
		check = true;
		node* t1 = NULL;
		node* t2 = NULL;
		for(int i = 0 ; i< n1; i++) {
			int a,b; char c;
			cin>>a>>b>>c;
			if ( t1== NULL) {
				t1 = new node(a);
				Noi_node(t1,b,c);
			}
			else Them_node(t1,a,b,c);
		}
		cin >> n2;
		for(int i = 0 ; i< n2; i++) {
			int a,b; char c;
			cin>>a>>b>>c;
			if ( t2== NULL) {
				t2 = new node(a);
				Noi_node(t2,b,c);
			}
			else Them_node(t2,a,b,c);
		}
		Kiem_tra(t1,t2);
		(check)? cout<<"1"<<endl : cout <<"0"<<endl;
	}
}
