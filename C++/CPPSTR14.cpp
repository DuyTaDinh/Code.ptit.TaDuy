#include <bits/stdc++.h>
using namespace std;

int countWords(char *s) {
    int state = 0;
    int count = 0;
    while (*s) {
        if (*s == ' ' || *s == '\n' || *s == '\t')
            state = 0;
        else if (state == 0) {
            state = 1;
            count ++;
        }
        ++s;
    }
    return count;
}
int main() {
    int t;
    cin >> t;
    getchar();
    while (t--) {
        char c;
        char s[1000] ="";
        int i = 0;
        do {
            c = getchar();
            s[i++] = c; 
        } while (c != '\n');
        cout << countWords(s) << endl;

    }
    return 0;
}