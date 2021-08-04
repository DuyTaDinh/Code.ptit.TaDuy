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

int pre_id;

void solve(int in[],int pre[],int start,int end, int m[]) {
	if (start > end) return;
	int id = m[pre[pre_id++]];
	solve(in,pre,start,id-1,m);
	solve(in,pre,id+1,end,m);
	cout<<in[id] <<" ";
}

main() {
	SPEED;
	MULTIPLE_TEST {
		pre_id = 0;
		int n;
		cin>>n;
		int m[10004];
		int in[n],pre[n];
		for(int i= 0 ; i< n; i ++) {
			cin>>in[i];
			m[in[i]] = i;
		}
		for(int i = 0 ; i< n ; i++) cin>> pre[i];
		
		solve(in,pre,0,n-1,m);
		cout<<endl;
	}
}




//int search(int in[], int x, int n) {
//	for(int i = 0 ; i< n ; i++) {
//		if(in[i] == x) return i;
//	}
//	return -1;
//}
//void printPostorder(int in[],int pre[], int n) {
//	int root = search(in,pre[0],n);
//	if(root!= 0) {
//		printPostorder(in,pre+1,root);
//	}
//	
//	if(root!= n-1) {
//		printPostorder(in+root+1,pre+root+1,n-root-1);
//	}
//	cout<<pre[0]<<" ";
//	
//}
//main() {
//	SPEED;
//	MULTIPLE_TEST{
//		int n;
//		cin>>n;
//		int in[n],pre[n];
//		for(int i = 0; i < n ; i++) cin>>in[i];
//		for(int i= 0 ; i < n ; i++) cin>>pre[i];
//		printPostorder(in,pre,n);
//		cout<<endl;
//	}
//}

