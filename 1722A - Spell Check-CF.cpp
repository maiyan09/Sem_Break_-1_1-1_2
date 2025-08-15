#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    int t, n; cin >> t;
    while (t--) {
        string s; cin >> n >> s;
        string t = "Timur";
        sort(t.begin(), t.end());
        sort(s.begin(), s.end());
        if (s == t) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
