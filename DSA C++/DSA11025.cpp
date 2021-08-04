#include<bits/stdc++.h>
using namespace std;
#define fasten() ios_base::sync_with_stdio(0); cin.tie(); cout.tie()
#define ll long long
#define pb push_back
const ll Mod = 1e9+7;
int idx = 0;

struct node{
	int value;
	node* left;
	node* right;
};

node* newnode(int value){
	node* tmp = new node;
	tmp->value = value;
	tmp->left = NULL;
	tmp->right = NULL;
	return tmp;
}

void postOrder(node* tree){
	if(tree == NULL) return;
	cout << tree->value << " ";
	postOrder(tree->left);
	postOrder(tree->right);
}

node* build(int inOrder[], int begin, int end){
	if(begin > end) return NULL;
	int mid = begin + (end - begin) / 2;
	node* tmp = newnode(inOrder[mid]);
	tmp->left = build(inOrder, begin, mid - 1);
	tmp->right = build(inOrder, mid + 1, end);
	return tmp;
}

void solve(){
	int n;
	cin >> n;
	int inOrder[n];
	for(int i = 0; i < n; i++) cin >> inOrder[i];
	sort(inOrder, inOrder + n);
	postOrder(build(inOrder, 0, n - 1));
	cout << endl;
}

int main(){
	fasten();
	int test;
	cin >> test;
	while(test--){
		solve();
	}
	return 0;
}
//Cactus 