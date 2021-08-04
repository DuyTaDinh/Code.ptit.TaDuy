#include<bits/stdc++.h>
using namespace std;
string check(string s){
    stack<char> st;
    for(int i = 0 ; s[i]; i++) {
    	if (s[i]=='(') st.push(i); 
    	else if(!st.empty() && s[i] == ')') {
    		if(s[st.top() -1] == '-' ) {
				for(int j = st.top(); j< i ; j++) {
					if(s[j] == '-') s[j] = '+';
					else if (s[j] == '+') s[j] = '-';
				}
			}
			st.pop();
		}
	}
	string res="";
	for(int i=0; s[i]; i++) {
		if (s[i]=='(' || s[i] == ')') continue;
		res += s[i];
	}
    return res;
}
main()
{
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        if (check(s1)==check(s2)) cout<<"YES\n"; 
		else cout<<"NO\n";
    }

}