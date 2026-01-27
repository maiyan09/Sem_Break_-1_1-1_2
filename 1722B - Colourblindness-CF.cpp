#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        
        string a, b;
        cin >> a >> b;

        bool isColor = true;
        for (int i = 0; i < n; i++) {
            if ((a[i] == 'R' && b[i] != 'R') ||
                (a[i] != 'R' && b[i] == 'R')) {
                isColor = false;
                break;
            }
        }
        if (isColor) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
