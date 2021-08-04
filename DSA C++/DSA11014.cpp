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
#define all(x) x.begin(),x.end()
#define mp make_pair
#define pii pair<int, int>
#define null NULL

struct node{
    int content;
    node* left;
    node* right;
    node(int c):content(c),left(null),right(null){}
};

bool b;
int n;

node* build_tree(){
    cin >> n;
    map <int,node*> m;
    map <node*,node*> parent;
    for(int i=0;i<n;i++){
        int a,b;
        char c;
        cin >> a >> b >> c;
        node* p1 = new node(a);
        node* p2 = new node(b);
        if(m.find(a) != m.end())
            p1 = m[a];

        // if(m.find(b) != m.end())
        //     p2 = m[b];

        if(c == 'L')
            p1->left = p2;
        else
            p1->right = p2;

        parent[p2] = p1;
        if(parent.find(p1) == parent.end())
            parent[p1] = null;

        m[a] = p1;
        m[b] = p2;
    }
    for(auto i:parent){
        if(i.second == null)
            return i.first;
    }
}

int sum;

void getResult(node* p, char c){
    if(p != null){
        if(p->left == null && p->right == null && c == 'R')
            sum += p->content;
        getResult(p->left,'L');
        getResult(p->right,'R');
    }
}

void solve(){
    
}
main() {
	SPEED;
	MULTIPLE_TEST {
		node* tree = build_tree();
	    sum = 0;
	    getResult(tree,'L');
	    cout << sum << endl;	
	}
}






