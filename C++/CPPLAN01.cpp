#include<bits/stdc++.h>
using namespace std;

string Sub(string a, string b){
    string res = "";
    int remember = 0;
    while (a.size() < b.size())
        a = '0' + a;
    while (a.size() > b.size())
        b = '0' + b;
    if (a < b){
        swap(a, b);
    }
    for(int i = a.size()-1; i >= 0; --i) {
        int temp = int(a[i]- '0') - int(b[i]- '0') - remember;
        if(temp < 0) {
            res = char(temp + 10 +'0') + res;
            remember = 1;
        }else{
            res = char(temp + '0') + res;
            remember = 0;
        }
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        cout << Sub(a, b) << endl;
    }
}
