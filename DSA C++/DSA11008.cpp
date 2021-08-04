#include <bits/stdc++.h>
 using namespace std;
#define null NULL
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

struct node{
    int value;
    node* left;
    node* right;
    node(int c):value(c),left(null),right(null){}
};

void insert(node* &p,int parent,int val,char c)
{
    if(p!=null)
    {
        if(p->value==parent)
        {
            if(c=='L') p->left = new node(val);
            else p->right = new node(val);
        }
        insert(p->left,parent,val,c);
        insert(p->right,parent,val,c);
    }
}
vector <int> v;

void getResult(node* p, int lv)
{
    if(p!=null)
    {
        if(p->left==null && p->right==null) v.push_back(lv);
        else
        {
            getResult(p->left,lv+1);
            getResult(p->right,lv+1);
        }
    }
}
 int main()
 {
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        node* start=null;
        int n;
        cin>>n;
        v.clear();
        for(int i=0;i<n;i++)
        {
            int parent,value;
            char c;
            cin>>parent>>value>>c;
            if(i==0) start = new node(parent);
            insert(start,parent,value,c);
        }
        getResult(start,0);
        if(*max_element(v.begin(),v.end())==*min_element(v.begin(),v.end())) cout<<1;
        else cout<<0;
        cout<<endl;
    }
    return 0;
 }