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

main() {
	SPEED;
	MULTIPLE_TEST {
		int n;
        string a,b;
        cin>>n>>a>>b;
        int s1=0,s2=0;
        for(int i=0;i<a.size();i++) s1=s1*n+a[i]-'0';
        for(int i=0;i<b.size();i++) s2=s2*n+b[i]-'0';
        int sum=s1+s2;
        if(sum==0) cout<<0<<endl;
        else 
        {
            string res="";
            while(sum)
            {
                res.push_back('0'+sum%n);
                sum/=n;
            }
            reverse(res.begin(),res.end());
            cout<<res<<endl;
        }

	}
}
