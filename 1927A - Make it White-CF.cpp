#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int first = 0, second = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                first = i;
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                second = i;
            }
        }
        cout << second - first + 1 << endl;
    }

    return 0;
}
