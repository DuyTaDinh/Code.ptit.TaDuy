#include<bits/stdc++.h>
using namespace std;

string Add(string a, string b){
    string res = "";
    int remember = 0;
    while (a.size() < b.size())
        a = '0' + a;
    while (a.size() > b.size())
        b = '0' + b;
    for(int i = a.size()-1; i >= 0; --i) {
        int temp = int(a[i]- '0') + int(b[i]- '0') + remember;
        res = char(temp%10+ '0') + res;
        remember = temp/10;
    }
    if(remember > 0) res = char(remember + '0') + res;
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        cout << Add(a, b) << endl;
    }
}
