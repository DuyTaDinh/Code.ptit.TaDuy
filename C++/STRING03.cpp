#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin , s);
    int i,j, tmp = 0, temp;
    if(s[0] > 96){
        s[0] = s[0] - 32;
        cout << s[0];
    }else cout << s[0];
    for(i = s.size()-1; i >= 0; --i) {
        if (s[i] != ' ' && s[i-1] == ' '){
            temp = i;
            break;
        }
    }
    for(i = 1; i < temp-1; ++i) {
        if(s[i] != ' ' && s[i-1] == ' '){
            if(s[i] > 96){
                s[i] = s[i] - 32;
                cout << " " << s[i];
            }else
                cout << " " << s[i];
        }else if(s[i] > 64){
            if(s[i] < 96){
                s[i] = s[i] + 32;
                cout << s[i];
            }else
                cout << s[i];
        }
    }
    cout << ", ";
    for(j = temp; j < s.size(); ++j) {
        if(s[j] > 95){
            s[j] = s[j] - 32;
            cout << s[j];
        }else
            cout << s[j];
    }
    return 0;
}
