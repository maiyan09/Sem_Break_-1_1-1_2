#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        
        char minimum = '9';
        for (auto i : s) {
            minimum = min(minimum, i);
        }
        cout << minimum << endl;
    }
    return 0;
}
