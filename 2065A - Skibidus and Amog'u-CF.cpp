#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int l = s.size();
        if (s[l-2] != 'u' && s[l-1] != 's') {
            cout << s << endl;
        }
        else {
            s[l-2] = 'i';
            s.pop_back();
            cout << s << endl;
        }
    }
    return 0;
}
