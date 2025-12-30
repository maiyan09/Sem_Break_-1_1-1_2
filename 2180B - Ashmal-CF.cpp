#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <string> a(n);
        for (int i = 0; i < n; i++) { 
            cin >> a[i];
        }
        string s = "";
        for (int i = 0; i < n; i++) {
            if (s == "") {
                s = a[i];
            }
            else {
                if (a[i]+s < s+a[i])
                    s = a[i] + s;
                else
                    s += a[i];
            }
        }
        cout << s << endl;
    }

    return 0;
}
