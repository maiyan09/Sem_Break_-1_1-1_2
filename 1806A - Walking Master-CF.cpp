#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        int cnt = 0;
        if (a==b && b==c) cout << "0" << endl;
        else if (b <= d) { // -2 -1 1 1
            a += (d-b);
            if (a < c) {
                cout << "-1" << endl;
                continue;
            }
            cnt = (d-b) + (a-c);
            cout << cnt << endl;
        }
        else cout << "-1" << endl;
    }

    return 0;
}
