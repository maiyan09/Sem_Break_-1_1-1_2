#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, a, b; cin >> n >> a >> b;
        int res = 0;
        if (n%2 != 0) {
            res = min((n/2 * b + a), n*a);
        }
        else {
            res = min((n/2 * b), n*a);
        }
        cout << res << endl;
    }

    return 0;
}
