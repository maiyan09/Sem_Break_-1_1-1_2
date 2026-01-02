#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        int ans = INT_MIN;
        int sleep = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                ans = max(ans, i + k);
            }
            if (i > ans) {
                sleep++;
            }
        }

        cout << sleep << endl;
    }
    return 0;
}
