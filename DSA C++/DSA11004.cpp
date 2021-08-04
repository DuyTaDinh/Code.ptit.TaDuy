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

#define null NULL
#define mp make_pair


struct node {
    int value;
    node* left;
    node* right;
    node(int c): value(c),left(null),right(null){}
};
void insert(node* &p,int parent,int value, char c)
{
    if(p!=null)
    {
        if(p->value==parent)
        {
            if(c=='L') p->left = new node(value);
            else p->right = new node(value);
        }
        insert(p->left,parent,value,c);
        insert(p->right,parent,value,c);
    }
}
vector < pair<int,int> > v;

void getResult(node* p, int lv)
{
    if(p!=null)
    {
        v.push_back(mp(p->value,lv));
        getResult(p->left,lv+1);
        getResult(p->right,lv+1);

    }
}
bool ss(pair<int,int> a,pair<int,int> b)
{
    return a.second<b.second;
}
main() {
	SPEED;
	MULTIPLE_TEST {
		v.clear();
        node* start = null;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int parent,value;
            char c;
            cin>>parent>>value>>c;
            if(i==0) start = new node(parent);
            insert(start,parent,value,c);
        }
        getResult(start,0);
        stable_sort(v.begin(),v.end(),ss);
        for(int i=0;i<v.size();i++) cout<<v[i].first<<" ";
        cout<<endl;

	}
}

//#include <bits/stdc++.h>
//#define null NULL
//#define mp make_pair
//using namespace std;
//
//struct node {
//    int value;
//    node* left;
//    node* right;
//    node(int c): value(c),left(null),right(null){}
//};
//
//node* build_tree()
//{
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
//
//        parent[p2]=p1;
//
//        if(parent.find(p1)==parent.end()) parent[p1]=null;
//        m[a]=p1;
//        m[b]=p2;
//    }
//    map <node*,node*>::iterator it;
//    for(it=parent.begin();it!=parent.end();it++)
//    {
//        if((*it).second==null) return (*it).first;
//    }
//}
//
//
//void getResult(node* p)
//{
//    queue < pair<node*,int > > q;
//    q.push(mp(p,0));
//    vector <vector<int> > v(1009);
//    while(!q.empty())
//    {
//        node* t = q.front().first;
//        int lv = q.front().second;
//        q.pop();
//        v[lv].push_back(t->value);
//        if(t->left!=null) q.push(mp(t->left,lv+1));
//        if(t->right!=null) q.push(mp(t->right,lv+1));
//    }
//    for(int i=0;i<v.size();i++)
//    {
//        for(int j=0;j<v[i].size();j++) cout<<v[i][j]<<" ";
//    }
//}
//
//int main()
//{
//    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//    int t;
//    cin>>t;
//    while(t--)
//    {
//
//        node* tree = build_tree();
//        getResult(tree);
//
//        cout<<endl;
//
//    }
//
//    return 0;
//}
