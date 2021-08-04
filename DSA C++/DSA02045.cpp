#include <bits/stdc++.h>
using namespace std;

vector<string> s;
void sub(string in, string out)
{
	if (in.empty()) {
      	s.push_back(out);
		return;
	}
	sub(in.substr(1), out + in[0]);
	sub(in.substr(1), out);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--) {
		s.clear();
		int n;
		cin>>n;
		string in;
		cin>>in;
		string out ="";
		sub(in, out);
		sort(s.begin(),s.end());
	  	for(int i = 0 ;i<s.size(); i++) cout<<s[i]<<" ";
	  	cout<<endl;
	}
	return 0;
}
