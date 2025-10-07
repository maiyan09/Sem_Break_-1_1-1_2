#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string st; cin >> st;
        set <char> s(st.begin(), st.end()); 

        int res = (s.size()*2) + ((n - s.size()));
        cout << res << endl;
    }
}
