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


int main()
{
    SPEED;
    int t;
    int a[105],b[105];
    int dem[300];
    cin>>t;
    while(t--)
    {
        
        int n,m;
        cin>>n>>m;
        int sizeZ=n+m-1;
        FILL(dem,0);
        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<m;i++) 
			cin>>b[i];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                dem[i+j]+=a[i]*b[j];
        
        for(int i=0;i<sizeZ;i++) 
			cout<<dem[i]<<" ";
        cout<<endl;

    }
    return 0;
}