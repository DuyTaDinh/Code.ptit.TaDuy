#include <bits/stdc++.h>
using namespace std;

int check;
struct node { // khai bao node
	int data; //du lieu
	node *l; // con tro left va right
	node *r;
	node(int x) { // ham khoi tao
		data = x;
		l = NULL;
		r = NULL;
	}
};

typedef node NODE; 

void noi_node(NODE* &t,int b, char c) {
	if(c == 'L') t->l = new NODE(b);
	if(c == 'R') t->r = new NODE(b);
}

void tao_tree(NODE* t, int a, int b, char c) {
	if(t == NULL) return;
	if (t->data == a) noi_node(t,b,c);
	tao_tree(t->l,a,b,c);
	tao_tree(t->r,a,b,c);
	 
}

void Duyet_NLR(NODE *t) {
	if (t!= NULL) {
		cout << t->data <<" ";
		Duyet_NLR(t->l);
		Duyet_NLR(t->r);
		
	}
}

void Kiem_Tra(NODE* t) {
	if(t==NULL || check == 0) return; // khi node t la node la hoac da co node trung gian k0 tm
	if( (t->l == NULL && t->r !=NULL) || (t->l != NULL && t->r ==NULL) )
		check = 0;
	Kiem_Tra(t->l);
	Kiem_Tra(t->r);
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		check = 1;
		int n;
		cin>> n;
		NODE* t = NULL;
		while(n--) {
			int a,b; char c;
			cin>> a>> b>> c;
			if (t == NULL) {
				t = new NODE(a);
				noi_node(t,b,c);
			}
			else tao_tree(t,a,b,c);
		}
		Kiem_Tra(t);
		cout<<check<<endl;
	}
	
	return 0;
}