#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    getline(cin , s1);
    cin >> s2;
    int left, right, i , j;
    for(i = 0; i < s1.size(); ++i) {
        if(s1[i] == s2[0] && s1[s2.size()+i-1] == s2[s2.size()-1])
		{
            right = i + s2.size();
            left = i;
        }
    }
    for(j = 0; j < left; ++j) {
        cout << s1[j];
    }
    for(j = right+1; j < s1.size(); ++j) {
        cout << s1[j];
    }
    return 0;
}
