#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int ans = 0;
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int row1 = min(a, m);
        int row2 = min(m, b);
        int remainingSeat = (m-row1)+(m-row2);
        if (remainingSeat > c) {
            ans = row1+row2+c;
        }  else {
            ans = row1+row2+ (min(remainingSeat, c));
        }
        cout << ans << endl;
    }
}
