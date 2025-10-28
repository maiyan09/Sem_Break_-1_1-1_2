#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int oddCount = 0;
        int n, k; cin >> n >> k;
        map<char, int>m;
        string s; cin >> s;
        for (auto i : s) m[i]++;
        for (auto i : m) {
            if (i.second % 2 != 0) {
                oddCount++;
            }
        }
        if (oddCount > k+1) cout <<"NO" << endl;
        else cout << "YES" << endl;
    }
}
