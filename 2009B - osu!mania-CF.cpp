#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        char ch[n][4];
        vector <int> v;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 4; j++) {
                cin >> ch[i][j];
                if (ch[i][j] == '#') {
                    v.push_back(j+1);
                }
            }
        }
        for (int i = v.size()-1; i >= 0; i--) {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
