#include <bits/stdc++.h> 
using namespace std; 

void reverseWords(string s) {
    vector <string> str;
    string temp ="";
    int i;
    for (i = 0 ; i< s.length(); i++) {
        if (s[i] == ' ') {
            str.push_back(temp);
            temp = "";
        } else {
            temp = temp +s[i];
        }
    }
    str.push_back(temp);
    for (i = str.size() - 1; i>= 0; i--) {
        cout << str[i] << " ";
    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    getchar();
    while(t--) {
        string s;
        getline(cin, s);
        reverseWords(s);
    }
}
