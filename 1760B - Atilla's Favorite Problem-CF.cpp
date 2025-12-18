#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int maximum = 0;
        for (int i = 0; i < n; i++) { // down
            maximum = max((s[i]-'a' +1), maximum);
        }
        cout << maximum << endl;
    }

    return 0;
}
