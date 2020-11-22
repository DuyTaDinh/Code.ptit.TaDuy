#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin , s);
    int temp, k, i, j;
    for(i = s.size()-1; i >= 0; --i) {
        if (s[i] != ' ' && s[i-1] == ' ') {
            temp = i;
            break;
        }
    }
    for(j = temp; j < s.size(); ++j) {
        if(s[j] < 95){
            s[j] = s[j] + 32;
            cout << s[j];
        }else cout << s[j];
    }
    if(s[0] < 95){
        s[0] = s[0] + 32;
        cout << s[0];
    }else cout << s[0];
    
    for(i = 1; i < temp-1; ++i) {
        if(s[i] != ' ' && s[i-1] == ' '){
            if(s[i] < 95){
                s[i] = s[i] + 32;
                cout << s[i];
            }else{
                cout << s[i];
            }
        }
    }
    cout << "@ptit.edu.vn";
    return 0;
}
