#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        set <int> s;
        for (int i = 0; i < n; i++) {
            long long x; cin >> x;
            s.insert(x);
        }
        if(s.size() != n) cout << "NO" << endl;
        else  cout << "YES" << endl;
    }
}
