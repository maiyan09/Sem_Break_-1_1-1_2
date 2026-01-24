#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        //            -> second largest amg(d,c)      ->second largest amg(a,b)
        if (max(a,b) < ((d+c)-max(d, c)) || max(c,d) < ((a+b)-max(a,b))) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
