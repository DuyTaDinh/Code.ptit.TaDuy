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
    string value;
    node* left;
    node* right;
    node(string c):value(c),left(null),right(null){}
    node(){}
};

node* build_tree()
{
        int n;
        cin>>n;
        string a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        node* start = new node(a[0]);
        queue < pair<int,node*> > q;
        q.push(mp(0,start));
        while(!q.empty())
        {
            pair<int,node*> u=q.front();
            q.pop();
            int pos = u.first;
            node*now = u.second;
            if(pos*2+1<n)
            {
                node* p1 = new node(a[pos*2+1]);
                q.push(mp(pos*2+1,p1));
                now->left = p1;
            }
            if(pos*2+2<n)
            {
                node* p2 = new node(a[pos*2+2]);
                q.push(mp(pos*2+2,p2));
                now->right = p2;
            }
        }
        return start;
}
int cal(node* p){
    if(p->value == "+") return cal(p->left) + cal(p->right);
    if(p->value == "-") return cal(p->left) - cal(p->right);
    if(p->value == "*") return cal(p->left) * cal(p->right);
    if(p->value == "/") return cal(p->left) / cal(p->right);
    return atoi(p->value.c_str());
}
main() {
	SPEED;
	MULTIPLE_TEST {
		cout<<cal(build_tree())<<endl;

	}
}
